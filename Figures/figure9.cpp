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
 double alpha(0.12); // 

 P C=P(0,0);
 P Dy=polar(1,0);
 P Dz=polar(1,0.25);
 P Dzz=polar(1,alpha);
 P Dyy=polar(1,alpha-0.25);
 P D=drop_perp(Dyy, C, Dy);

 arrow(C,Dy,1.0);
 arrow(C,Dz,1.0);
 arrow(C,Dzz,1.0);
 arrow(C,Dyy,1.0);
 line(D,Dyy);
 rangle(Dyy, Dy, D);

 font_size("footnotesize");
 arc_arrow(C,0.2,0,-alpha);
 arc_arrow(C,0.2,0.25,0.25-alpha);
 
 //label(polar(0.9,alpha/2),P(-5,1),"sin$\\alpha$");
 label(polar(0.27,0.25-alpha/2),P(0,0),"c");
 label(polar(0.27,0.-alpha/2),P(0,0),"c");
 label(Dy,P(-5,-8),"$\\vec{e}_y$");
 label(Dyy,P(-12,3),"$\\vec{e}_{y'}$");
 label(Dz,P(10,-5),"$\\vec{e}_z$");
 label(Dzz,P(5,-10),"$\\vec{e}_{z'}$");

end();

}

