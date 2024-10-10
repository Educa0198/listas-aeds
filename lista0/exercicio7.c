#include <math.h>
#include<stdio.h>
int main()
{
    int razao, termo, quintotermo;
    
    scanf("%d %d", &razao, &termo);
    quintotermo = termo * pow(razao, (5 - 1));
    printf("%d",quintotermo);
}