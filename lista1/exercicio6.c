#include <stdio.h>

int main() {
    
    float a, b, raiz;

   
 
    scanf("%f", &a);
    
    scanf("%f", &b);

   
    if (a != 0) {
        raiz = -b / a;
 
        printf("%.2f\n",raiz);
    }

    return 0;
}
