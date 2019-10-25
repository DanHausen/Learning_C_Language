#include <stdio.h>
//Exibir as notas e media de alunos, percentual de aprovado e reprovado
int main(void)
{
    int i = 1, media = 0, percent, qtdeAlunos, total = 0, aprov = 0, reprov = 0;
    float aux = 0;
    printf("Digite a quantidade de alunos ");
    scanf("%i", &qtdeAlunos);

    while(i <= qtdeAlunos)
    {
        printf("\nDigite a media do aluno %i\n",i);
        scanf("%i", &media);
        printf("\n");
        i++;

        if(media >= 6)
        {
            aux++;
            aprov = 0;
            total = total + media;
            printf("APROVADO \n");
        }
        else
        {
            reprov = 0;
            printf("REPROVADO\n");
        }
    }
    if(aux > 0)
    {
        printf("\n%.1f Porcento de alunos aprovados\n", (aux / qtdeAlunos) * 100);
        printf("%i",  total/qtdeAlunos);
    }

    return 0;
}