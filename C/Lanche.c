#include <stdio.h>

int main(void) {
  
  int a, b;
  double c;

  scanf("%d" "%d", &a, &b);

  if (a == 1){
    c = b * 4.00;
    printf("Total: R$ %.2lf\n", c);
} else if (a == 2){
    c = b * 4.50;
    printf("Total: R$ %.2lf\n", c);
} else if (a == 3){
    c = b * 5.00;
    printf("Total: R$ %.2lf\n", c);
}  else if (a == 4){
    c = b * 2.00;
    printf("Total: R$ %.2lf\n", c);
  }  else if (a == 5){
    c = b * 1.50;
    printf("Total: R$ %.2lf\n", c);
}

return 0;
}
