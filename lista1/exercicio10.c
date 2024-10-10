#include <stdio.h>

int main() {
    int horasExtras, horasFalta;
    float H, premio;

   
   
    scanf("%d", &horasExtras);
   
    scanf("%d", &horasFalta);

   
    int minutosExtras = horasExtras * 60;
    int minutosFalta = horasFalta * 60;

    
    H = minutosExtras - (2.0 / 3.0 * minutosFalta);

    
    if (H >= 2400) {
        premio = 500.00;
    } else if (H > 1800 && H < 2400) {
        premio = 400.00;
    } else if (H >= 1200 && H < 1800) {
        premio = 300.00;
    } else if (H >= 600 && H < 1200) {
        premio = 200.00;
    } else {
        premio = 100.00;
    }

    
    printf("%.2f\n", premio);

    return 0;
}
