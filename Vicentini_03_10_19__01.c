#include<stdio.h>

int main()
{
    //Teste
  float precoPorKM, dias, distancia, valorPassagem, valorComDesconto, valorComAcrescimo;
  int teste;

  scanf("%f", &precoPorKM);
  scanf("%f", &dias);
  scanf("%f", &distancia);

  valorPassagem = precoPorKM * distancia;

  if(dias > 7 && distancia > 800)
  {
    valorComDesconto = valorPassagem - (valorPassagem * 0.3);
    printf("O preco da passagem recebeu desconto de: %.1f. Totalizando %.1f\n", valorPassagem * 0.3, valorComDesconto);
    valorPassagem = valorComDesconto;
  }

  if(valorPassagem > 1000)
  {
    valorComAcrescimo = (valorPassagem/5);
    valorComAcrescimo = valorComAcrescimo + valorComAcrescimo * 0.01;
    printf("Pode parcelar em 5x de: %.1f. Totalizando: %.1f\n", valorComAcrescimo, valorComAcrescimo * 5);
  }
  return 0;
}
