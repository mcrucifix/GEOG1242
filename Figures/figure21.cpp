/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

// compile with, e.g., elaps -DALL polyhedra.xp

const double MAX(3);

int main()
{
  picture(P(-MAX,-MAX),P(MAX,MAX), "6x6in");
  begin();
  camera.at(P(0,5,1));
  camera.roll(-0.52);
  
  revolutions(); // set angle units
  frame fr_horizon(E_2,-E_1,E_3);    // horizontal frame
  frame fr_equator=fr_horizon;
  fr_equator.rot1(0.58); // equator frame

  P O=sph(0,0,0);
  P X=sph(1,0,0);
  P Y=sph(1,0.5,0); 
  P B=sph(1,0,0.08);
  P A=sph(1,0.3,0.09);
  P Ac=sph(1,0,0.25);
  P Ae=sph(1,0.3,0); 
  P N=sph(1,0,0.328);
  P So=sph(1,0.37,0);

  Sphere S;

  pen(Black());
  latitude(0,0,1,S);
  latitude(0,0,1,S,fr_equator);
  front_arc(Ac,Ae,S);
  pen(Black(0.3));
  line(X,Y);
  line(B,O);

  dashed();
  pen(Black(0.3));
  back_latitude(0,0,1,S);
  //back_latitude(0,0,1,S,fr_equator);
  //longitude(0,0,1,S,fr_equator);
  //line(O,N);
  solid();

  font_size("tiny");
  label(O,P(0,80),"P");
  label(O,P(60,13),"S");
  label(A,P(2,5),"A");
  label(O,P(-20,-40),"ecliptique");
  label(O,P(40,-20),"equateur");

  pen(Black());
  dot(Ac);dot(Ae);dot(N);ring(So);dot(A);
  S.draw();

  end();
}
