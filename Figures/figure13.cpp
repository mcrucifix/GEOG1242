/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

// Cercle trigonomÌtrique elementaire

const double MAX(3);

int main()
{
picture(P(-MAX,-MAX),P(MAX,MAX), "9x9in");

begin();

 revolutions() ;  //set unit angle
 double alpha(0.1); // 

 P C=P(0,0);
 P D1=polar(1,0);
 P D2=polar(1,alpha);
 circle(C,1); // draw the trigonometrical circle of centre C and radius 1

 line(C,D1);
 line(C,D2);

 font_size("scriptsize");
 arc_arrow(C,1.1,0,alpha);
 arc_measure(C,D1,D2,25);
 
 label(polar(1.15,alpha/2),P(15,0),"R cos$\\varphi d\\lambda$");
 label(polar(0.3,alpha/2),P(0,0),"$d\\lambda$");
 label(C,P(60,-8),"$Rcos\\varphi$");

end();

}

