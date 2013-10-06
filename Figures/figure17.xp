/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

// compile with, e.g., elaps -DALL polyhedra.xp

const double MAX(3);

int main()
{
  picture(P(-MAX,-MAX),P(MAX,MAX), "6x6in");
  begin();
  camera.at(P(0, 6, 1.25));
 
  revolutions(); // set angle units
  
  pen(Black()); // coordinate grid
  latitude(0, 0, 1);
  pen(Black(0.3)); // coordinate grid
  dashed();
  back_latitude(0, 0, 1);
  solid();
  pen(Black());
  longitude(0.1, 0, 1);
  longitude(0.2, 0, 1);
  longitude(0.3, 0, 1);

  P O=sph(0,0,0);
  P C=sph(1,0.25,0.25);
  
  P G=sph(1,0.7,0.40);
  P SS=sph(1,0.8,0.48);
  P A=sph(1,0.6,0.40);

  Sphere S;
  pen(Black());
  dashed();
  line(O,SS);
  line(O,G);
  line(O,A);
  solid();
  dot(O);dot(C);dot(G);dot(SS);dot(A);

  
  
  font_size("tiny");
  //arc_arrow(C, 1.0, 0.35, 0.19);

  arc_arrow(P(0.,0.,0.5),0.85,0.2,0.3);
  arc_arrow(P(0.,0.,0.55),0.83,0.2,0.1);
  arc_arrow(P(0.,0.,0.7),0.70,0.3,0.1);
  label(C,P(6,6),"P");
  label(G,P(-5,5),"G");
  label(SS,P(-5,5),"S");
  label(A,P(-5,5),"A");
  
  label (sph(1.03,0.65,0.42),P(0,0),"$$H_G$$");
  label (sph(1.03,0.75,0.41),P(0,0),"$$\\delta\\lambda$$");
  label (sph(1.03,0.70,0.37),P(0,0),"$$H_S$$");

  S.draw();

  end();
}
