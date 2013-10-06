/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

// Cercle trigonomÃtrique élémentaire

const double MAX(3);

int main()
{
picture(P(-MAX,-MAX),P(MAX,MAX), "6x6in");

begin();

 radians() ;  //set unit angle
 double alpha(0.75); // 

 pen(0.7);

 P O=P(0.,0.);
 P V1=P(1.2,0.); 
 P V2=P(0.,1);
 P X=P(1.2*cos(alpha),1.4);

 ellipse(O,V1,V2);

 P A=P(1.2*cos(alpha),sin(alpha));

 line(O,A);  // line OA


 P OP=P(0.2*cos(alpha),0.);  // oprime
 line(OP,A);

 pen(0.1);
 P OPA=A-OP;

 line(A-J(OPA),A+J(OPA));
 line(P(-1.2,0),P(1.2,0));
 line(P(0,-1.2),P(0,1));
 dashed();
 arrow(P(0,1),P(0,1.4));
 line(A,X);
 solid();
 arc_measure(O,P(1,0),OPA,4);
 arc_measure(OP,P(1,0),OPA,4);
 //arc_measure(A,J(OPA),X,8);

 font_size("tiny");
 label(O,P(-5,-5),"O");
 label(O,P(50,-5),"a");
 label(O,P(-5,40),"b");
 label(O,P(0,-90),"P.S");
 label(O,P(7,10),"$\\varphi '$");
 label(O,P(23,3),"$\\varphi$");
 label(O,P(115,0),"Equateur celeste");
 label(O,P(0,80),"Pole celeste");
 label(A,P(7,1),"A");
 
end();

}

