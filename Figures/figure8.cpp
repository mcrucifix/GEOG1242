/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

const double MAX(3);

int main()
{
  picture(P(-MAX,-MAX),P(MAX,MAX), "9x9in");

  begin();
  camera.at(6,2,2);

  degrees();
  pen(0.3);

  P O=P(0.,0.,0.);

  P A=sph(1,0,90);
  P B=sph(1,90,50);
  P C=sph(1,30,40);

  P E_X=E_1;
  P E_Z=B;
  P E_Y=E_Z*E_X;

  arrow(O,E_X); arrow(O,E_Y); arrow(O,E_Z);
  pen(0.7);
  front_arc(A,B); front_arc(B,C); front_arc(C,A); // draws the portions of great circle

  label(A,P(5,5),"A");
  label(B,P(5,5),"B");
  label(C,P(10,-2),"C");

  P C_1=C-(C|E_Z)*E_Z;
  P C_1x=C_1-(C_1|E_Y)*E_Y;  // attention : l'ordre du produit a de limportance

  pen(0.3);
  line(O,C);
  
  dashed();
  dash_size(6);
  line(C,C_1);
  line(O,C_1);
  line(C_1,C_1x);
  line(O,-E_Y);
  solid();
  arc_measure(O,E_Y,C_1);
  label(P(0.05,-0.05,0.),P(32,0),"$(\\pi - B)$");
  
  right_angle(C_1,C-C_1,-C_1);
  right_angle(C_1x,-C_1x,C_1-C_1x);

  label(E_X, P(-1,-8), "$\\vec{e_x}$");
  label(E_Y, P(8,0), "$\\vec{e_y}$");
  label(E_Z, P(5,-4), "$\\vec{e_z}$"); 
 
 /* pst_format(); */
  end();
}
