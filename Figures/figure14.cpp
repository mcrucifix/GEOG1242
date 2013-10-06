/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

const double MAX(3);

int main()
{
  picture(P(-MAX,-MAX),P(MAX,MAX), "9x9in");

  begin();
  camera.at(30,0,2);

  double phi(50); // latitude
  degrees();
  frame fr_horizon(E_2,-E_1,E_3);    // horizontal frame
  frame fr_equator=fr_horizon;
  fr_equator.rot2(90-phi); // equator frame
  Sphere S0=Sphere();
  pen(0.7);

  P O=P(0.,0.,0.);


  longitude(0,0,90,S0,fr_horizon); // meridien
  longitude(180,0,90,S0,fr_horizon); // meridien
  back_longitude(0,0,90,S0,fr_horizon); // meridien
  back_longitude(180,0,90,S0,fr_horizon); // meridien

//  latitude(0,0,360,S0,fr_horizon) ;  horizon
  latitude(0,0,360,S0,fr_horizon); // horizon
  latitude(0,-90,90,S0,fr_equator) ; // equator


  line(E_1,-E_1);
  dashed();

  back_latitude(0,-180,180,S0,fr_horizon) ; // horizon
  back_latitude(0,-90,90,S0,fr_equator) ; // equator

  pen(0.3);
  arc_measure(O,-E_2,sph(1,90,90+phi));
  line(O,sph(1,90,90+phi));
  line(O,sph(1,90,90));
  line(O,sph(1,-90,0));

  solid();

  right_angle(O,sph(1,90,phi),sph(1,90,90+phi));
 
  label(sph(1,90,0),P(5,0),"S");
  label(sph(1,90,90-phi),P(5,5),"M");
  label(sph(1,90,90),P(0,5),"Z");
  label(sph(1,90,90+phi),P(-5,5),"P");
  label(sph(1,0,0),P(-5,-5),"W");
  label(sph(1.02,90,90-(phi/2)),P(5,5),"$$\\varphi$$");

  font_size("tiny");
  label(sph(1.02,30,0),P(0,-5),"horizon");
  label(sph(1.02,30,20),P(0,-5),"equateur");


 pst_format();
  end();
}
