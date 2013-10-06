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

 degrees() ;  //set unit angle 
 P C=P(0,0);
 P X=polar(1,0);
 P Y=P(0,0.8);
 P A=polar(0.8,35);
 P D=drop_perp(A,C,X);

 line(C,D);
 line(C,A);
 line(A,D);
 line(P(0,-0.12),Y);
 rangle(C, D, A);

 font_size("tiny");
 arc_arrow(C,0.3,0,35);
 arc_arrow(C,0.2,90,35);
 
 label(C,P(30,-5),"R cos$\\varphi$d$\\lambda$");
 label(C,P(10,26),"$\\gamma$");
 label(C,P(37,35),"ds");
 label(C,P(45,10),"$\\frac{\\pi}{2}-\\gamma$");
 label(A,P(10,-25),"Rd$\\varphi$");

end();

}

