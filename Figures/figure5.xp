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
  longitude(0.2, 0, 0.5);
  longitude(0.3, 0, 0.5);

  P O=sph(0,0,0);
  P C=sph(1,0.25,0.25);
  
  P G=sph(1,0.7,0.40);
  P SS=sph(1,0.8,0.42);
  
  P Geq=sph(1,0.7,0.5);
  P Seq=sph(1,0.8,0.5);

  Sphere S;
  pen(Black());
  pen(0.3);
  line_style("- . -");
  dash_size(6);
  line(P(0,0,1.1),P(0,0,0));
  pen(0.5);
  dashed();
  dash_size(6);
  line(O,SS);
  line(O,G);
  line(O,Seq);
  line(O,Geq);

  solid();
  dot(O);dot(C);dot(G);dot(SS);dot(Seq);dot(Geq);

  
  
  font_size("tiny");
  //arc_arrow(C, 1.0, 0.35, 0.19);
  arc_arrow(O+P(0,0,-0.05),1.0,0.2,0.3);
  label(C,P(6,6),"P");
  label(G,P(-5,5),"G");
  label(SS,P(-5,5),"S");
  
  pen(0.3);
  arc_measure(O,Geq,G,12);
  arc_measure(O,Seq,SS,12);
  arc_measure(O,Seq,Geq,22);

  pen(0.7);
  label (sph(1,0.25,0),P(0,-10),"$$\\lambda_S$$");
  label (sph(1.0,0.37,0),P(0,-2),"\\'equateur");

  S.draw();

  end();
}
