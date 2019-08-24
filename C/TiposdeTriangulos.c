#include <stdio.h>

int main()

{

    double a, b, c, D;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a < b)

    {
        D = a;
        a = b;
        b = D;
    }

    if (b < c)

    {
        D = b;
        b = c;
        c = D;
    }

    if (a < b)
    {
        D = a;
        a = b;
        b = D;
    }

    if (a >= b + c)

    {
        printf("NAO FORMA TRIANGULO\n");
    }

    else if (a * a == b * b + c * c)

    {
        printf("TRIANGULO RETANGULO\n");
    }

    else if (a * a > b * b + c * c)

    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    else if (a * a < b * b + c * c)

    {
        printf("TRIANGULO ACUTANGULO\n");
    }

     

    if (a == b && b == c)

    {
        printf("TRIANGULO EQUILATERO\n");
    }

    else if (a == b || b == c)

    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;

}
