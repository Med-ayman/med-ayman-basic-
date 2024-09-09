#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float s, M;

    printf("Veuillez entrer le nombre d'étudiants : ");
    scanf("%d", &n);

    int t1[n];

    for (i = 0; i < n; i++) {
        printf("Veuillez entrer la note de l'étudiant %d : ", i + 1);
        scanf("%d", &t1[i]);
    }

    s = 0;
    for (i = 0; i < n; i++) {
        s += t1[i];
    }

    M = s / n;

    printf("La moyenne des notes est : %.2f\n", M);

    return 0;


}
