#include <stdio.h>

int main(void) {
  
  float A, B, C;

  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%f", &C);

  float TRIANGULO = A * C / 2;
  float CIRCULO = (C * C) * (3.14159);
  float TRAPEZIO = (A+B) * C /2;
  float QUADRADO = B * B;
  float RETANGULO = A * B;

    printf ("TRIANGULO: %.3f\n",TRIANGULO);
    printf ("CIRCULO: %.3f\n",CIRCULO);
    printf ("TRAPEZIO: %.3f\n",TRAPEZIO);
    printf ("QUADRADO: %.3f\n",QUADRADO);
    printf ("RETANGULO: %.3f\n",RETANGULO);

    return 0;
}


