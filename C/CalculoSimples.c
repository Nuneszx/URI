#include <stdio.h>

int main(void) {
  
  int A, B,D,E;
  float C,F,G;

  scanf("%d" "%d" "%f", &A, &B, &C);
  scanf("%d" "%d" "%f", &D, &E, &F);

  G = (B * C) + (E * F);
  
  printf("VALOR A PAGAR: R$ %.2f\n", G);

return 0;
}
