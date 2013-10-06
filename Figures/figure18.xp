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
  camera.roll(-0.6);
 
  revolutions(); // set angle units

  P O=sph(0,0,0);
  P A=sph(1,0.32,0.1);
  P AA=sph(1.2,0.32,0.1);
  P Aeq=sph(1,0.32,0);
  P AAeq=sph(1.2,0.32,0);

  P B=sph(1,0.18,0.1);
  P BB=sph(1.2,0.18,0.1);
  P Beq=sph(1,0.18,0);
  P BBeq=sph(1.2,0.18,0);

  P C=sph(1,0,0.25);
  P CC=sph(1.2,0,0.25);
  P DD=sph(1.2,0,-0.25);

  P X=sph(1,0,0);
  P XX=sph(1.2,0,0);
  P Y=sph(1,0.5,0); 
  P YY=sph(1.2,0.5,0);

  Sphere S;
  Sphere SS = Sphere(O,1.2);

  pen(Black(0.6));
  latitude(0, 0, 1,S);
  pen(Black());
  latitude(0, 0, 1.2,SS);
  pen(Black(0.3));
  line(X,Y);
  line(O,AA);
  line(O,AAeq);

  dashed();
  pen(Black(0.3));
  back_latitude(0, 0, 1,S);
  back_latitude(0, 0, 1.2,SS);
  line(sph(1.3,0,0.25),sph(1.7,0,-0.25));
  line(O,BBeq);

  solid();
  pen(Black(0.6));
  front_arc(C,Aeq,S);
  front_arc(C,Beq,S);
  pen(Black());
  front_arc(CC,AAeq,SS);
  dot(O);dot(A);dot(AA);dot(Aeq);dot(C);
  dot(CC);dot(AAeq);dot(Beq);dot(BBeq);

  font_size("tiny");
  arc_arrow(O, 1.3, 0.18, 0.32,0.5);
  pen(Black(0.6));
  arc_arrow(sph(1,0.25,0.16), 0.5, 0.18, 0.32,0.5);
  arc_arrow(sph(1,0.22,0.18), 0.5, 0.5, 0.35,0.5);
  arc_arrow(sph(1,0.20,0.20), 0.5, 0.45, 0.23,0.5);

  label(CC,P(-5,0),"P");
  label(A,P(-5,0),"A");
  label(AA,P(6,2),"A");
  label(C,P(35,0),"H");
  label(C,P(12,-10),"T");
  label(C,P(15,-25),"$\\alpha$");
  label(Beq,P(3,-3),"$\\gamma$");
  label(BBeq,P(4,-8),"$\\gamma$");
  label(O,P(40,-37),"$\\alpha$");
  label(O,P(40,25),"$\\delta$");
  label(O,P(30,20),"$\\delta$");

  S.draw();
  pen(Black());
  SS.draw();

  end();
}
