#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    float media;

    printf("Me diga a nota do primeiro bimestre: ");
    scanf("%f",&nota1);

    printf("Me diga a nota do segundo bimestre: ");
    scanf("%f",&nota2);

    printf("Me diga a nota do terceiro bimestre: ");
    scanf("%f",&nota3);

    media = /*(float)*/ ( nota1 + nota2 + nota3 ) / 3 ;
    printf("A média das suas notas é %.2f", media);

    return 0;
}
