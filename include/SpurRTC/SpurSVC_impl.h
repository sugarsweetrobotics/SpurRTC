// -*-C++-*-
/*!
 * @file  SpurSVC_impl.h
 * @brief Service implementation header of Spur.idl
 *
 */

#include "SpurSkel.h"

#ifndef SPURSVC_IMPL_H
#define SPURSVC_IMPL_H

//using namespace spur; 
/*!
 * @class YPSpurSVC_impl
 * Example class implementing IDL interface spur::YPSpur
 */
class YPSpurSVC_impl
 : public virtual POA_spur::YPSpur,
   public virtual PortableServer::RefCountServantBase
{
 private:
   // Make sure all instances are built on the heap by making the
   // destructor non-public
   //virtual ~YPSpurSVC_impl();

 public:
  /*!
   * @brief standard constructor
   */
   YPSpurSVC_impl();
  /*!
   * @brief destructor
   */
   virtual ~YPSpurSVC_impl();

   // attributes and operations
   CORBA::Long setVel(CORBA::Double v);
   CORBA::Long setAccel(CORBA::Double v);
   CORBA::Long setAngVel(CORBA::Double w);
   CORBA::Long setAngAccel(CORBA::Double a);
   CORBA::Long setPos(spur::COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double th);
   CORBA::Long adjustPos(spur::COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double th);
   CORBA::Long getPos(spur::COORD_SYS cs, CORBA::Double& x, CORBA::Double& y, CORBA::Double& th);
   CORBA::Long getVel(CORBA::Double& v, CORBA::Double& w);
   CORBA::Boolean isNearPos(spur::COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double r);
   CORBA::Boolean isNearAng(spur::COORD_SYS cs, CORBA::Double th, CORBA::Double d);
   CORBA::Boolean isOverLine(spur::COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double th);
   CORBA::Long line(spur::COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double th);
   CORBA::Long stopLine(spur::COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double th);
   CORBA::Long circle(spur::COORD_SYS cs, CORBA::Double x, CORBA::Double y, CORBA::Double d);
   CORBA::Long spin(spur::COORD_SYS cs, CORBA::Double th);
   CORBA::Long stop();
   CORBA::Long free();

};



#endif // SPURSVC_IMPL_H


