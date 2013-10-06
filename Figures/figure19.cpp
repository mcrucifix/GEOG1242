/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

// compile with, e.g., elaps -DALL polyhedra.xp

const double MAX(3);

int main()
{
  picture(P(-MAX,-MAX),P(MAX,MAX), "6x6in");
  begin();
  camera.at(P(0, 3.5, 1.25));
 
  degrees(); // set angle units
  pen(Black(0.3)); // coordinate grid
  for (int i=0; i<=12; ++i) {
    latitude(90-15*i, 0, 360);
    longitude(30*i, 0, 360);
  }

  revolutions();
  P O=sph(0,0,0);
  P A=sph(1,0.32,0.1);
  P B=sph(1,0,0.14);
  P C=sph(1,0.25,0.25);
  P Aeq=sph(1,0.32,0);
  P Beq=sph(1,0,0.14);

  Sphere S;
  pen(Red());
  bold();
  front_triangle(B,A,C,S);
  dot(A);dot(B);dot(C);
  pen(Black(0.3));
  
  font_size("tiny");
  //arc_arrow(C, 1.0, 0.35, 0.19);
  label(B,P(-8,0),"P");
  label(A,P(8,0),"A");
  label(C,P(0,5),"Z");
  label(A,P(-10,30),"z");
  label(C,P(0,-8),"$\\delta\\lambda$");
  
  pen(Black(0.1));
  dotted();
  S.draw();

  end();
}
