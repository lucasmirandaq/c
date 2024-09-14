#include <stdio.h>
#include <math.h>


int main(void) {
  float a, b, c, delta, x1, x2;
  printf("Digite o valor de a: ");
  scanf("%f", &a);
  
  printf("Digite o valor de b: ");
  scanf("%f", &b);
  
  printf("Digite o valor de c: ");
  scanf("%f", &c);

  if(a > 0){
    delta = (b * b) - (4 * a * c);
    
    printf("Valor de delta: %f \n", delta);

    if(delta > 0){
      x1 = (- b + (sqrt(delta))) / (2 * a);
      x2 = (- b - (sqrt(delta))) / (2 * a);
      printf("Valor de x1: %f\n", x1);
      printf("Valor de x2: %f\n", x2);
      
    }else{
      printf("Não existe raiz real \n");
    }

  }else{
    printf("O valor de a deve ser maior que 0 \n");
  }
  
  return 0;
}