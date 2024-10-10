#include <stdio.h>

int main() {
    float salarioMinimo, kwGasto, valorKw, valorAPagar, valorComDesconto;

 
  
    scanf("%f", &salarioMinimo);
   
    scanf("%f", &kwGasto);

 
    valorKw = (salarioMinimo / 7) / 100;  
    valorAPagar = valorKw * kwGasto;      
    valorComDesconto = valorAPagar * 0.9; 


    printf("%.2f\n", valorKw);
    printf("%.2f\n", valorAPagar);
    printf("%.2f\n", valorComDesconto);

    return 0;
}

