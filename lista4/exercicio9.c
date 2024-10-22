#include <stdio.h>
#include <stdlib.h>

void converteHora(int totalSegundos, int *hora, int *min, int *seg);

int main() {
    int totalSegundos;
    int hora, min, seg;

    
    
    scanf("%d", &totalSegundos);

    
    converteHora(totalSegundos, &hora, &min, &seg);

    
    printf("%d:%d:%d", hora, min, seg);

    return 0;
}

void converteHora(int totalSegundos, int *hora, int *min, int *seg) {
    *hora = totalSegundos / 3600;
    totalSegundos %= 3600;        
    *min = totalSegundos / 60;    
    *seg = totalSegundos % 60;    
}