#include <stdio.h>
#include <stdbool.h>

int main() {
    int ano;
    char fezaniversario;
    bool podedirigir = false;

    
    scanf("%d", &ano);
    scanf(" %c", &fezaniversario);  

    if (fezaniversario == 'N') {
        ano = ano + 1;
    }


    if (2024 - ano >= 18) {
        podedirigir = true;
    }

   
    if (podedirigir) {
        printf("%d\nPode dirigir\n", 2024 - ano);
    } else {
        printf("%d\nNão pode dirigir\n", 2024 - ano);
    }

    return 0;
}
