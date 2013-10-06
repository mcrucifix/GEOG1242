/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

// Cercle trigonomÌtrique elementaire

const double MAX(3);

// project arg to line through tail, head
P drop_perp(const P& arg, const P& tail, const P& head)
{
  return arg - ((arg - tail)%(head - tail)); // % = orthogonalization
}

void rangle(const P& arg, const P& tail, const P& head)
{
  const P dir(head - tail);
  const P loc(arg - ((arg - tail)%dir));

  right_angle(loc, dir, J(dir));
}

int main()
{
picture(P(-MAX,-MAX),P(MAX,MAX), "9x9in");

begin();

 revolutions() ;  //set unit angle
 double alpha(0.05); // 


 P C=P(0,0);
 P D1=polar(1,0);
 P D2=polar(1,alpha);
 circle(C,1); // draw the trigonometrical circle of centre C and radius 1
 P D3=drop_perp(D2, C, D1);

 line(C,D1);
 line(C,D2);
 line(D2,D3);

 font_size("footnotesize");
 //arc_arrow(C,0.6,0.,alpha);
 arc_measure(C,D1,D2,25);
 rangle(C, D3, D2);
 
 label(polar(0.9,alpha/2),P(-5,1),"sin$\\alpha$");
 label(polar(0.3,alpha/2),P(0,0),"$\\alpha$");

end();

}

