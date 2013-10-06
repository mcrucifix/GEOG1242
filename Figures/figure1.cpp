/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

// Cercle trigonomÃtrique élémentaire

const double MAX(3);

int main()
{
picture(P(-MAX,-MAX),P(MAX,MAX), "9x9in");

begin();

 revolutions() ;  //set unit angle
 double alpha(0.10); // 


 P C=P(0,0);
 P D1=polar(1.2,0);
 P D2=polar(1.2,alpha);
 circle(C,1); // draw the trigonometrical circle of centre C and radius 1

 line(C,D1);
 line(C,D2);

 arc_arrow(C,1.1,0.,alpha);

 label(C,P(15,5),"$\\alpha$");
 arc_measure(C,D1,D2,8);
 label(polar(0.5,alpha),P(-5,5),"R");
 label(polar(1.3,alpha/2),P(0,0),"$\\alpha R$");

end();

}

