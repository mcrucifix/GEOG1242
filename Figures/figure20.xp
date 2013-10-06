/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

// compile with, e.g., elaps -DALL polyhedra.xp

const double MAX(3);

int main()
{
  picture(P(-MAX,-MAX),P(MAX,MAX), "6x6in");
  begin();
  camera.at(P(0, 4.5, 1.25));
  camera.roll(-0.6);
  
  revolutions(); // set angle units
  frame fr_horizon(E_2,-E_1,E_3);    // horizontal frame
  frame fr_equator=fr_horizon;
  fr_equator.rot1(0.6); // equator frame

  P O=sph(0,0,0);
  P CC=sph(1.2,0,0.25);

  P X=sph(1,0,0);
  P Y=sph(1,0.5,0); 
  P A=sph(1,0,0.1);
  P B=sph(1,0.5,-0.1); 

  Sphere S;

  pen(Black());
  latitude(0,0,1,S);
  latitude(0,0,1,S,fr_equator);
  latitude(0.1,0,1,S);
  latitude(0.9,0,1,S);
  pen(Black(0.3));
  line(X,Y);
  line(A,B);
  line(sph(1,0,0.1),sph(1,0.5,0.1));
  line(sph(1,0,0.9),sph(1,0.5,0.9));

  dashed();
  pen(Black(0.3));
  back_latitude(0,0,1,S);
  back_latitude(0,0,1,S,fr_equator);
  back_latitude(0.1,0,1,S);
  back_latitude(0.9,0,1,S);
  line(sph(1.3,0,0.25),sph(1.7,0,-0.25));
  solid();

  font_size("tiny");
  label(CC,P(-5,0),"P");
  label(O,P(60,13),"E");
  label(O,P(-10,-25),"H");

  pen(Black());
  dot(O);
  S.draw();

  end();
}
