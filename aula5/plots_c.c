// 01/03/2025
// Polar Plots / C
/* gcc plots_c.c -o plots_c -I/usr/local/dislin/include -L/usr/local/dislin/lib -ldislin -lm
  */

#include <stdio.h>
#include <math.h>
#include "dislin.h"

int main ()
{ int n = 300, m = 10, i, ic;
  double f = 3.1415926 / 180.0, step, a;
  float  xray[300], yray[300], x2[10], y2[10];

  step = 360. / (n - 1);

  for (i = 0; i < n; i++)
  { a = i * step * f;
    yray[i] = (float) a;
    xray[i] = (float) sin (5 * a);
  }

  for (i = 0; i < m; i++)
  { x2[i] = i + 1;
    y2[i] = i + 1;
  }

  setpag ("da4p");
  metafl ("cons");
  scrmod ("revers");
  disini ();
  pagera ();
  hwfont ();
  axspos (450,1800);

  titlin ("Polar Plots", 2);
  ticks  (3, "Y");
  axends ("NOENDS", "X");
  labdig (-1, "Y");
  axslen (1000, 1000);
  axsorg (1050, 900);

  ic = intrgb (0.95, 0.95, 0.95);
  axsbgd (ic);
 
  grafp  (1.0, 0.0, 0.2, 0.0, 30.0);
  color  ("blue");
  curve  (xray, yray, n);
  color  ("fore");
  htitle (50);
  title  ();
  endgrf ();

  labdig (-1, "X");
  axsorg (1050, 2250);
  labtyp ("VERT", "Y");
  grafp  (10.0, 0.0, 2.0, 0.0, 30.0);
  barwth (-5.0);
  polcrv ("FBARS");
  color  ("blue");
  curve  (x2, y2, m);
  disfin ();
  return 0;
}
