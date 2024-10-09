#include <stdio.h>
#include <stdlib.h>

int main() {
    int alunos, nota[3];
    float medialunos = 0;
    char media;

    scanf("%d", &alunos);
    for (int i = 0; i < alunos; i++)
        {
        medialunos = 0;

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &nota[j]);
            medialunos += nota[j];
        }
        scanf(" %c", &media);
        if (media == 'A') {
            medialunos /= 3.0;
        } else {
            medialunos = (nota[0] * 5 + nota[1] * 3 + nota[2] * 2) / 10.0;
        }

        printf("%.2f\n", medialunos);
    }

    return 0;
}
