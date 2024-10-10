#include <stdio.h>
int main()
{
    float a , b , c, d , media;

    scanf("%f %f %f %f", & a, &b, &c, &d);

    media = (a + b + c + d) / 4;
    if( media > 7)
    {
        printf("%.2f\n",media);
        printf("aprovado");
    }
    else
    {
        printf("%.2f\n",media);
        printf("reprovado");
    }

}