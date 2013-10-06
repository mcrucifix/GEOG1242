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
  dashed();
  back_latitude(0, 0, 360);
  pen(Black());
  solid();
  latitude(0, 0, 360);

  revolutions();
  P O=sph(0,0,0);
  P C=sph(1,0.33,0.14);
  P B=sph(1,0.33,0);
  P A=sph(1,0.18,0);

  Sphere S;
  pen(Red());
  bold();
  front_triangle(A,B,C,S);
  plain();
  pen(Black(0.3));
  dashed();
  line(O,A);
  line(O,B);
  line(O,C);
  pen(Black());
  longitude(0.33,0,1);
  solid();
  dot(O);dot(A);dot(B);dot(C);

  
  font_size("tiny");
  label(B,P(5,-5),"B");
  label(A,P(-5,-5),"A");
  label(C,P(5,5),"C");
  label(O,P(-5,5),"O");
  label(A,P(45,-10),"c");
  label(B,P(4,40),"a");
  label(A,P(18,40),"b");
  
  S.draw();

  end();
}
