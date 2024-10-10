#include <stdio.h>


float fatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}

float calculaS(int N) {
   float S = 1.0; 
    for (int i = 1; i <= N; i++) {
        S += 1.0 / fatorial(i); 
    }
    return S;
}

int main() {
    int N;
    scanf("%d", &N);
    if (N >= 0) {
        float resultado = calculaS(N);
        printf("%f\n", resultado);
    } 

    return 0;
}
