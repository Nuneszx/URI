#include <stdio.h>
#include <math.h>

int main(void) {
  
  double x1,x2,y1,y2,a,b,d;
  
    scanf ("%lf" "%lf", &x1, &y1);
    scanf ("%lf" "%lf", &x2, &y2);

    a = x2 - x1;
    b = y2 - y1;
    
    d = sqrt( (a * a) + (b * b) );

      printf ("%.4lf\n", d);

  return 0;
}
