#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void getlado(int *ptrA, int *ptrB, int *ptrC);
bool checatriangulo(int *ptrA, int *ptrB, int *ptrC);
void tipotriangulo(int *ptrA, int *ptrB, int *ptrC);

int main() {
    int ladoA = 1, ladoB = 1, ladoC = 1;

    while (ladoA >= 0 && ladoB >= 0 && ladoC >= 0) {
        getlado(&ladoA, &ladoB, &ladoC);

       
        if (ladoA < 0 || ladoB < 0 || ladoC < 0) {
            break;
        }

        bool ehvalido = checatriangulo(&ladoA, &ladoB, &ladoC);
        if (ehvalido) {
            tipotriangulo(&ladoA, &ladoB, &ladoC);
        } else {
            printf("NÃO TRIANGULO\n");
        } 
    }

    return 0;
}

void getlado(int *ptrA, int *ptrB, int *ptrC) {
    scanf("%i %i %i", ptrA, ptrB, ptrC);
}

bool checatriangulo(int *ptrA, int *ptrB, int *ptrC) {
    if (*ptrA < *ptrB + *ptrC && *ptrB < *ptrA + *ptrC && *ptrC < *ptrA + *ptrB) {
        return true;
    }
    return false;
}

void tipotriangulo(int *ptrA, int *ptrB, int *ptrC) {
    if (*ptrA == *ptrB && *ptrA == *ptrC) {
        printf("TRIANGULO EQUILATERO\n");
    } else if (*ptrA == *ptrB || *ptrA == *ptrC || *ptrB == *ptrC) {
        printf("TRIANGULO ISOSCELES\n");
    } else {
        printf("TRIANGULO ESCALENO\n");
    }
}
