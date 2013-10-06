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

 pen(0.5);
 P C=P(0,0);
 circle(C,1); // draw the trigonometrical circle of centre C and radius 1
 line(C,cis(alpha));
 line(C,P(1.1,0));
 pen(0.1);
 P calpha=P(cos(alpha),0.);

 line(cis(alpha),calpha);
 line(cis(alpha),polar(1.4,alpha));
 
 solid();
 line(cis(alpha)-J(cis(alpha)),cis(alpha)+J(cis(alpha)));
 right_angle(calpha,P(-1,0),P(0,1),8);
 right_angle(cis(alpha),cis(alpha),J(cis(alpha)));

 font_size("tiny");
 label(P(cos(alpha)/2.,0.),P(0,-5),"$\\cos\\alpha$");
 degrees();
 label_angle(90);
 label(P(cos(alpha),sin(alpha)/2),P(-2,0),"$\\sin\\alpha$",l);
 label_angle(0);
 label(C,P(15,5),"$\\alpha$");
 arc_measure(C,P(1,0),cis(alpha)+J(cis(alpha)),10);
 label(C,P(23,30),"1");

end();

}

