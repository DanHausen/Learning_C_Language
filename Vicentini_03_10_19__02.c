#include <stdio.h>

int main(void) {
  float num1, num2, num3;

  printf("Insira o primeiro numero:");
  scanf("%f", &num1);
  printf("Insira o segundo numero:");
  scanf("%f", &num2);
  printf("Insira o terceiro numero:");
  scanf("%f", &num3);

  if(num1 == num2 && num1 == num3)
  {
    printf("Triangulo equilatero\n");    
  }  
  if(num1 != num2 && num1 != num3 && num2 != num3)
  {
    printf("Triangulo escaleno\n");    
  }
  if((num1 == num2 && num1 != num3) || (num1 != num2 && num1 == num3) || (num2 != num1 && num2 == num3))
  {
    printf("Triangulo isoceles\n");    
  }
  
  if(num1 >= num2 && num2 >= num3) //1 > 2 > 3
    printf("Linha 1 \n%.1f\n%.1f\n%.1f", num1, num2, num3);
  if(num1 >= num3 && num3 >= num2) //1 > 3 > 2
    printf("Linha 2 \n%.1f\n%.1f\n%.1f", num1, num3, num2);
  if(num2 >= num1 && num1 >= num3) //2 > 1 > 3
    printf("Linha 3 \n%.1f\n%.1f\n%.1f", num2, num1, num3);
  if(num2 >= num3 && num3 >= num1) //2 > 3 > 1
    printf("Linha 4 \n%.1f\n%.1f\n%.1f", num2, num3, num1);
  if(num3 >= num1 && num1 >= num2) //3 > 1 > 2
    printf("Linha 5 \n%.1f\n%.1f\n%.1f", num3, num1, num2);
  if(num3 >= num2 && num2 >= num1) //3 > 2 > 1
    printf("Linha 6 \n%.1f\n%.1f\n%.1f", num3, num2, num1);

  if(num1 + num2 == num3)
  {
    printf("\nA soma do numero 1 e numero 2 e igual ao numero 3");
  }
  return 0;
}
