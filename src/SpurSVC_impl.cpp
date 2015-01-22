// -*-C++-*-
/*!
 * @file  SpurSVC_impl.cpp
 * @brief Service implementation code of Spur.idl
 *
 */

#include "SpurSVC_impl.h"
#include <ypspur.h>
#include <stdint.h>

using namespace spur;
/*
 * Example implementational code for IDL interface spur::YPSpur
 */
YPSpurSVC_impl::YPSpurSVC_impl()
{
  // Please add extra constructor code here.
}


YPSpurSVC_impl::~YPSpurSVC_impl()
{
  // Please add extra destructor code here.
}


/*
 * Methods corresponding to IDL attributes and operations
 */
CORBA::Long YPSpurSVC_impl::setVel(CORBA::Double v)
{
  // Please insert your code here and remove the following warning pragma
  return Spur_set_vel(v);
}

CORBA::Long YPSpurSVC_impl::setAccel(CORBA::Double v)
{
  // Please insert your code here and remove the following warning pragma
  return Spur_set_accel(v);
}

CORBA::Long YPSpurSVC_impl::setAngVel(CORBA::Double w)
{
  // Please insert your code here and remove the following warning pragma
  return Spur_set_angvel(w);
}

CORBA::Long YPSpurSVC_impl::setAngAccel(CORBA::Double a)
{
  // Please insert your code here and remove the following warning pragma
  return Spur_set_angaccel(a);
}

CORBA::Long YPSpurSVC_impl::setPos(COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double th)
{
  int32_t mycs = ::CS_GL;
  switch(cs) {
  case spur::CS_GL:
    mycs = ::CS_GL;
    break;
  case spur::CS_LC:
    mycs = ::CS_LC;
    break;
  case spur::CS_FS:
    mycs = ::CS_FS;
  default:
    return -1;
  }
  return YPSpur_set_pos(mycs, x, y, th);
}

CORBA::Long YPSpurSVC_impl::adjustPos(COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double th)
{
  int32_t mycs = ::CS_GL;
  switch(cs) {
  case spur::CS_GL:
    mycs = ::CS_GL;
    break;
  case spur::CS_LC:
    mycs = ::CS_LC;
    break;
  case spur::CS_FS:
    mycs = ::CS_FS;
  default:
    return -1;
  }
  return YPSpur_adjust_pos(mycs, x, y, th);
}

CORBA::Long YPSpurSVC_impl::getPos(COORD_SYS cs, CORBA::Double& x, CORBA::Double& y, CORBA::Double& th)
{
  int32_t mycs = ::CS_GL;
  switch(cs) {
  case spur::CS_GL:
    mycs = ::CS_GL;
    break;
  case spur::CS_LC:
    mycs = ::CS_LC;
    break;
  case spur::CS_FS:
    mycs = ::CS_FS;
  default:
    return -1;
  }
  return YPSpur_get_pos(mycs, (&x), &(y), &(th));
}

CORBA::Long YPSpurSVC_impl::getVel(CORBA::Double& v, CORBA::Double& w)
{
  return Spur_get_vel(&v, &w);
}

CORBA::Boolean YPSpurSVC_impl::isNearPos(COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double r)
{
  int32_t mycs = ::CS_GL;
  switch(cs) {
  case spur::CS_GL:
    mycs = ::CS_GL;
    break;
  case spur::CS_LC:
    mycs = ::CS_LC;
    break;
  case spur::CS_FS:
    mycs = ::CS_FS;
  default:
    return -1;
  }
  return YPSpur_near_pos(mycs, x, y, r);
}

CORBA::Boolean YPSpurSVC_impl::isNearAng(COORD_SYS cs, CORBA::Double th, CORBA::Double d)
{
  int32_t mycs = ::CS_GL;
  switch(cs) {
  case spur::CS_GL:
    mycs = ::CS_GL;
    break;
  case spur::CS_LC:
    mycs = ::CS_LC;
    break;
  case spur::CS_FS:
    mycs = ::CS_FS;
  default:
    return -1;
  }
  return YPSpur_near_ang(mycs, th, d);
}

CORBA::Boolean YPSpurSVC_impl::isOverLine(COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double th)
{
  int32_t mycs = ::CS_GL;
  switch(cs) {
  case spur::CS_GL:
    mycs = ::CS_GL;
    break;
  case spur::CS_LC:
    mycs = ::CS_LC;
    break;
  case spur::CS_FS:
    mycs = ::CS_FS;
  default:
    return -1;
  }
  return YPSpur_over_line(mycs, x, y, th);
}

CORBA::Long YPSpurSVC_impl::line(COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double th)
{
  int32_t mycs = ::CS_GL;
  switch(cs) {
  case spur::CS_GL:
    mycs = ::CS_GL;
    break;
  case spur::CS_LC:
    mycs = ::CS_LC;
    break;
  case spur::CS_FS:
    mycs = ::CS_FS;
  default:
    return -1;
  }
  return YPSpur_line(mycs, x, y, th);
}

CORBA::Long YPSpurSVC_impl::stopLine(COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double th)
{
  int32_t mycs = ::CS_GL;
  switch(cs) {
  case spur::CS_GL:
    mycs = ::CS_GL;
    break;
  case spur::CS_LC:
    mycs = ::CS_LC;
    break;
  case spur::CS_FS:
    mycs = ::CS_FS;
  default:
    return -1;
  }
  return YPSpur_stop_line(mycs, x, y, th);
}

CORBA::Long YPSpurSVC_impl::circle(COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double d)
{
  int32_t mycs = ::CS_GL;
  switch(cs) {
  case spur::CS_GL:
    mycs = ::CS_GL;
    break;
  case spur::CS_LC:
    mycs = ::CS_LC;
    break;
  case spur::CS_FS:
    mycs = ::CS_FS;
  default:
    return -1;
  }
  return YPSpur_circle(mycs, x, y, d);
}

CORBA::Long YPSpurSVC_impl::spin(COORD_SYS cs, CORBA::Double th)
{
  int32_t mycs = ::CS_GL;
  switch(cs) {
  case spur::CS_GL:
    mycs = ::CS_GL;
    break;
  case spur::CS_LC:
    mycs = ::CS_LC;
    break;
  case spur::CS_FS:
    mycs = ::CS_FS;
  default:
    return -1;
  }
  return YPSpur_spin(mycs, th);
}

CORBA::Long YPSpurSVC_impl::stop()
{
  return Spur_stop();
}

CORBA::Long YPSpurSVC_impl::free()
{
  return Spur_free();
}



// End of example implementational code



