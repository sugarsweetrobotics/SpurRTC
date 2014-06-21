// -*- C++ -*-
/*!
 * @file  SpurRTC.cpp
 * @brief Spur RT-Component
 * @date $Date$
 *
 * $Id$
 */

#include "SpurRTC.h"
#include <ypspur.h>
// Module specification
// <rtc-template block="module_spec">
static const char* spurrtc_spec[] =
  {
    "implementation_id", "SpurRTC",
    "type_name",         "SpurRTC",
    "description",       "Spur RT-Component",
    "version",           "1.0.0",
    "vendor",            "Sugar Sweet Robotics",
    "category",          "Experimental",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    // Configuration variables
    "conf.default.debug", "0",
    "conf.default.max_vel", "0.2",
    "conf.default.max_acc", "0.2",
    "conf.default.max_rot_vel", "0.52",
    "conf.default.max_rot_acc", "0.314",
    // Widget
    "conf.__widget__.debug", "text",
    "conf.__widget__.max_vel", "text",
    "conf.__widget__.max_acc", "text",
    "conf.__widget__.max_rot_vel", "text",
    "conf.__widget__.max_rot_acc", "text",
    // Constraints
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
SpurRTC::SpurRTC(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_targetVelocityIn("targetVelocity", m_targetVelocity),
    m_poseUpdateIn("poseUpdate", m_poseUpdate),
    m_currentVelocityOut("currentVelocity", m_currentVelocity),
    m_currentPoseOut("currentPose", m_currentPose)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
SpurRTC::~SpurRTC()
{
}



RTC::ReturnCode_t SpurRTC::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("targetVelocity", m_targetVelocityIn);
  addInPort("poseUpdate", m_poseUpdateIn);
  
  // Set OutPort buffer
  addOutPort("currentVelocity", m_currentVelocityOut);
  addOutPort("currentPose", m_currentPoseOut);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // Bind variables and configuration variable
  bindParameter("debug", m_debug, "0");
  bindParameter("max_vel", m_max_vel, "0.2");
  bindParameter("max_acc", m_max_acc, "0.2");
  bindParameter("max_rot_vel", m_max_rot_vel, "0.52");
  bindParameter("max_rot_acc", m_max_rot_acc, "0.314");
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t SpurRTC::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t SpurRTC::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t SpurRTC::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t SpurRTC::onActivated(RTC::UniqueId ec_id)
{
  Spur_init();
  return RTC::RTC_OK;
}


RTC::ReturnCode_t SpurRTC::onDeactivated(RTC::UniqueId ec_id)
{
  Spur_stop();
  return RTC::RTC_OK;
}


RTC::ReturnCode_t SpurRTC::onExecute(RTC::UniqueId ec_id)
{
  if (m_targetVelocityIn.isNew()) {
    m_targetVelocityIn.read();
    Spur_vel(m_targetVelocity.data.vx, m_targetVelocity.data.va);
  }

  if (m_poseUpdateIn.isNew()) {
    m_poseUpdateIn.read();
    Spur_adjust_pos_GL(m_poseUpdate.data.position.x, m_poseUpdate.data.position.y, m_poseUpdate.data.heading);
  }

  double x, y, th;
  Spur_get_pos_GL(&x, &y, &th);
  m_currentPose.data.position.x = x;
  m_currentPose.data.position.y = y;
  m_currentPose.data.heading = th;
  setTimestamp(m_currentPose);
  m_currentPoseOut.write();


  double v, w;
  Spur_get_vel(&v, &w);
  m_currentVelocity.data.vx = v;
  m_currentVelocity.data.vy = 0;
  m_currentVelocity.data.va = th;
  setTimestamp(m_currentVelocity);
  m_currentVelocityOut.write();
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t SpurRTC::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t SpurRTC::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t SpurRTC::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t SpurRTC::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t SpurRTC::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void SpurRTCInit(RTC::Manager* manager)
  {
    coil::Properties profile(spurrtc_spec);
    manager->registerFactory(profile,
                             RTC::Create<SpurRTC>,
                             RTC::Delete<SpurRTC>);
  }
  
};


