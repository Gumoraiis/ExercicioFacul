#include <math.h>
#include <stdio.h>
int main(void) {

  float x1, x2, y1, y2, distancia;

  printf("Digite o valor de x1 e y1: ");
  scanf("%f %f", &x1, &y1);
  printf("Digite o valor de x2 e y2: ");
  scanf("%f %f", &x2, &y2);

  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  printf("A distancia eh = %.4f", distancia);
  return 0;
}