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
 
  degrees(); // set angle units
  pen(Black(0.3)); // coordinate grid
  back_latitude(0, 0, 360);
  pen(Black());
  latitude(0, 0, 360);
  pen(Black(0.3));

  revolutions();
  P O=sph(0,0,0);
  P A=sph(1,0.35,0.1);
  P B=sph(1,0.19,0.03);
  P C=sph(1,0.25,0.25);
  P Aeq=sph(1,0.35,0);
  P Beq=sph(1,0.19,0);

  Sphere S;
  pen(Red());
  bold();
  front_triangle(B,A,C,S);
  plain();
  dashed();
  pen(Black());
  front_arc(B,Beq,S);
  front_arc(A,Aeq,S);
  pen(Black(0.3));
  line(O,Aeq);
  line(O,A);
  solid();
  dot(O);dot(A);dot(B);dot(C);dot(Aeq);dot(Beq);
  pen(Black());
  
  font_size("tiny");
  //arc_arrow(C, 1.0, 0.35, 0.19);
  label(B,P(-8,0),"B");
  label(A,P(8,0),"A");
  label(O,P(30,20),"c");
  label(O,P(-5,-5),"O");
  label(A,P(15,-25),"$\\varphi_A$");
  label(B,P(-8,40),"$\\frac{\\pi}{2}-\\varphi_B$");
  label(A,P(-2,30),"$\\frac{\\pi}{2}-\\varphi_A$");
  label(C,P(0,-8),"$\\delta\\lambda$");
  
  S.draw();

  end();
}
