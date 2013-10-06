/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

// compile with, e.g., elaps -DALL polyhedra.xp

const double MAX(3);

int main()
{
  picture(P(-MAX,-MAX),P(MAX,MAX), "6x6in");
  begin();
  camera.at(P(0,6,1.25));
 
  revolutions(); // set angle units
  
  pen(Black()); // coordinate grid
  latitude(0, 0, 1);
  pen(Black(0.3)); // coordinate grid
  dashed();
  back_latitude(0, 0, 1);
  solid();

  P O=sph(0,0,0);
  P A=sph(1,0.35,0.12);
  P C=sph(1,0.25,0.25);
  P N=sph(1,0.25,-0.25);
  P Aeq=sph(1,0.35,0);
  P D=sph(1,0.45,0);

  Sphere S;
  pen(Black());
  front_arc(C,Aeq,S);
  dashed(); 
  line(O,A);
  line(sph(1.2,0.25,-0.25),C);
  //arrow(C,A,1);
  solid();
  dot(O);dot(A);dot(C);dot(Aeq);dot(D);
  
  font_size("tiny");
  //arc_arrow(C, 1.0, 0.35, 0.19);
  label(O,P(20,-22),"Horizon");
  label(Aeq,P(0,-5),"A'");
  label(D,P(5,0),"S");
  label(A,P(5,0),"A");
  label(C,P(0,5),"Z");
  label(N,P(0,-15),"Nadir");
  label(C,P(15,-15),"z");
  
  S.draw();

  end();
}
