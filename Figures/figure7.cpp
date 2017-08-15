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

  P B=sph(1,90,50);
  P A=sph(1,0,90);
  P C=sph(1,30,40);

  arrow(O,E_1); arrow(O,E_2); arrow(O,E_3);
  pen(0.7);
  front_arc(A,B); front_arc(B,C); front_arc(C,A); // draws the portions of great circle

  label(A,P(5,5),"A");
  label(B,P(5,5),"B");
  label(C,P(10,-2),"C");

  arc_measure(O,A,C); 
  label (P(0.2,0.,0.2),P(0,0),"b");

  P C_1=C-(C|E_3)*E_3;
  P C_1x=C_1-(C_1|E_2)*E_2;  // attention : l'ordre du produit a de limportance

  pen(0.3);
  line(O,C);
  
  dashed();
  line(C,C_1);
  line(O,C_1);
  line(C_1,C_1x);

  solid();
  arc_measure(O,E_2,C_1); 
  label(P(0.2,0.2,0.),P(0,0),"A");

  label(E_1, P(-5,-5), "$\\vec{e_x}$");
  label(E_2, P(8,0), "$\\vec{e_y}$");
  label(E_3, P(-5,7), "$\\vec{e_z}$"); 
  
  right_angle(C_1,C-C_1,-C_1);
  right_angle(C_1x,-C_1x,C_1&P(0,1,0));


/*  pst_format(); */
  end();
}
