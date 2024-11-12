#include <stdio.h>
#include <ctype.h>

int main()
{
    int vogal = 0, consoante = 0;
    char str[100];
    printf("Digite a string:\n");
    scanf(" %99[^\n]", str); 
    for (int i = 0; str[i] != '\0'; i++)  
    {
        char ch = tolower(str[i]);  
        if (ch >= 'a' && ch <= 'z')  
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vogal++;
            }
            else
            {
                consoante++;
            }
        }
    }

    printf("A quantidade de vogais eh %d\n", vogal);
    printf("A quantidade de consoantes eh %d\n", consoante);

    return 0;
}
