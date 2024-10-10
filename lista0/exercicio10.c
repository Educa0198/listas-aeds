#include <stdio.h>

int main() {
    int horas, minutos, totalMinutos;


   
    scanf("%d", &horas);


    
    scanf("%d", &minutos);


    totalMinutos = (horas * 60) + minutos;


    printf("%d\n", totalMinutos);

    return 0;
}
