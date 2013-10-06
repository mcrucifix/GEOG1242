/* -*-ePiX-*- */
#include "epix.h"
#define M_HR  M_PI/12.
#define M_DEG   M_PI/180.


#include <iostream>

char *asym[] =  {"0","I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X", "XI", "XII", 
                 "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX", "XXI", "XXII", 
                 "XXIII", "XXIV"};


using namespace ePiX;

const double MAX(3);

int az2yz(double *yy, double *zz, double a, double z)
  {
    double xx; double R;
    if (z <= 0) return(1);
    if (cos(z) == 0) return(1);
    if (cos(a) <= 0) return(1);
    *yy =  tan(a);
    *zz = -1. / (tan (z) * cos (a));
    double cosa = cos(a);
    double cosz = cos(z);
    return(0);
  }

int hr2az(double *a, double *z, double delta, double phi, double H)
  {
    double cosz;
    cosz =  sin(delta)*sin(phi) + cos(delta)*cos(phi)*cos(H);
    if (cosz > 1) return(1);
    if (cosz < 0) return(1);

    *z = acos(cosz);
    if (z == 0) return(1);

    double sina = sin(H)*cos(delta) / sin(*z);
    if (sina < -1) return(1);
    if (sina > 1) return(1);
    *a = asin(sina);
    return(0);
  }

int main()
{
  picture(P(-MAX,-MAX),P(MAX,MAX), "9x9in");

  begin();

  P O=P(0.,0.);

  const double  phi   =  50 * M_DEG;

  double a; double z;
  double yy; double zz;
  double delta;
  int iflag;
  P Pold; P Pnew;
  pen(0.5);

  for (int i=-12; i<=12; i++)
  {
   iflag=1;
   double H = double(i)*M_HR;
   for (int imon=0; imon <=6 ; imon++) 
   {
     delta = 23.5 * cos (double(imon) * M_HR * 2.) * M_DEG; 
   /*  delta = -20 * M_DEG; */
     int ires = hr2az (&a, &z, delta, phi, H);
     dot(O);
     if ( ires == 0 ) {
         ires = az2yz (&yy, &zz,  a, z);};
     if  (ires == 0 ) {
                      if (iflag) {Pold = P(yy,zz); dot(Pold); iflag=0;}
                                    else
                                    {Pnew = P(yy,zz);  dot(Pnew);
                                    line (Pold, Pnew); Pold = Pnew; };
                     if (imon == 6)  
                       {label(P(yy,zz),  P(6,6),  asym[i+12]);};
                    };
   };
  }
  pst_format();
  end();
}
