/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

// compile with, e.g., elaps -DALL polyhedra.xp

const double MAX(3);

int main()
{
  picture(P(-MAX,-MAX),P(MAX,MAX), "6x6in");
  begin();
  camera.at(P(0, 3, 1.25));
 
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
  P B=sph(1,0.30,0.1);
  P D=sph(1,0.35,0.13);
  P C=sph(1,0.25,0.25);
  P CC=sph(1.2,0.25,0.25);
  P Aeq=sph(1,0.35,0);
  P Beq=sph(1,0.30,0);

  Sphere S;
  pen(Red());
  bold();
  front_triangle(B,A,D,S);
  pen(Black());
  plain();
  dashed();
  front_arc(C,Beq,S);
  front_arc(C,Aeq,S);
  pen(Black(0.3));
  line(O,A);
  line(O,D);
  line(O,CC);
  solid();
  dot(O);dot(A);dot(B);dot(D);
  pen(Black());
  
  font_size("tiny");
  //arc_arrow(C, 1.0, 0.35, 0.19);
  label(O,P(10,2),"$\\varphi$");
  label(A,P(3,10),"d$\\varphi$");
  
  S.draw();

  end();
}
