/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

// compile with, e.g., elaps -DALL polyhedra.xp

const double MAX(3);

int main()
{
  picture(P(-MAX,-MAX),P(MAX,MAX), "6x6in");
  begin();
  camera.at(P(0, 5, 1.25));
  camera.roll(-0.4);
 
  revolutions(); // set angle units
  
  pen(Black()); // coordinate grid
  latitude(0, 0, 1);
  latitude(0.1, 0, 1);
  pen(Black(0.3)); // coordinate grid
  dashed();
  back_latitude(0, 0, 1);
  back_latitude(0.1, 0, 1);
  solid();

  P O=sph(0,0,0);
  P A=sph(1,0.35,0.1);
  P D=sph(1,0.35,0.13);
  P C=sph(1,0,0.25);
  P Aeq=sph(1,0.35,0);
  P X=sph(1,0,0);
  P XX=sph(1,0.5,0);
  P Y=sph(1,0,0.1);
  P YY=sph(1,0.5,0.1);

  Sphere S;
  line(X,XX);
  line(Y,YY);
  line(O,A);
  line(O,Aeq);
  line(O,C);
  pen(Black());
  front_arc(C,Aeq,S);

  dot(O);dot(A);dot(XX);dot(Aeq);
  pen(Black());
  
  font_size("tiny");
  arc_arrow(O, 1.1, 0.5, 0.35);
  arc_arrow(sph(1,0.26,0.16), 0.5, 0.5, 0.35);
  label(C,P(0,4),"P");
  label(A,P(4,4),"A");
  label(Aeq,P(0,-5),"A'");
  label(XX,P(5,0),"M");
  label(C,P(49,-3),"H");
  label(XX,P(10,-15),"H");
  
  S.draw();

  end();
}
