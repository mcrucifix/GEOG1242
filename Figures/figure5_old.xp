/* -*-ePiX-*- */
#include "epix.h"
using namespace ePiX;

const double MAX(3);

int main()
{
  picture(P(-MAX,-MAX),P(MAX,MAX), "6x6in");

  begin();
  camera.at(30,-8,5);

#ifdef GRAY
  camera.filter(Gray_Neutral());
#endif
  revolutions();
  double Theta(7.0/48);
  domain R(P(0,0,-0.25), P(1,1,0.25), mesh(12, 48, 24), mesh(12, 96, 120));
  domain R_T(P(0,0,-0.25), P(1,1-Theta,0.25), mesh(12, 48, 24), mesh(12, 96, 120));
 
  plain(Black(0.5));
  fill(White(1.9));
  scenery coords(sph, R_T.slice1(1)); //  rho = 1

  // draws the diedre
  fill(Yellow(0.35));

  coords.add(sph, R.slice1(0.2)); //  rho = 0.2
  coords.add(sph, R.slice2(0)).add(sph, R.slice2(1-Theta)); // theta = 0, Theta
  coords.add(sph, R.slice3(0)) ; // equator

  coords.draw();
  fill(false);

  pen(Black());

  bold();
  arc_arrow(P(0,0,0), 1.0, -Theta, 0);

  label(sph(1, -0.5*Theta, 0), P(2,-5), "$\\lambda$", t);

  base(Neutral(), 0);
  dashed();
  plain();

  pst_format();
  end();
}
