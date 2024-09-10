#include <stdio.h>
#include <stdlib.h>

float calculer_moyenne(float notes[], int nombre_etudiants) {
    float somme = 0;
    for (int i = 0; i < nombre_etudiants; i++) {
        somme += notes[i];
    }
    return somme / nombre_etudiants;
}

float trouver_max(float notes[], int nombre_etudiants) {
    float max = notes[0];
    for (int i = 1; i < nombre_etudiants; i++) {
        if (notes[i] > max) {
            max = notes[i];
        }
    }
    return max;
}

float trouver_min(float notes[], int nombre_etudiants) {
    float min = notes[0];
    for (int i = 1; i < nombre_etudiants; i++) {
        if (notes[i] < min) {
            min = notes[i];
        }
    }
    return min;
}


void afficher_notes_sup_moyenne(float notes[], int nombre_etudiants, float moyenne) {
    printf("Notes supérieures à la moyenne (%f) :\n", moyenne);
    for (int i = 0; i < nombre_etudiants; i++) {
        if (notes[i] > moyenne) {
            printf("Etudiant %d: %f\n", i + 1, notes[i]);
        }
    }
}


int compter_validations(float notes[], int nombre_etudiants) {
    int count = 0;
    for (int i = 0; i < nombre_etudiants; i++) {
        if (notes[i] >= 12) {
            count++;
        }
    }
    return count;
}


int compter_rattrapages(float notes[], int nombre_etudiants) {
    int count = 0;
    for (int i = 0; i < nombre_etudiants; i++) {
        if (notes[i] < 12) {
            count++;
        }
    }
    return count;
}

int main() {
    int nombre_etudiants;
    float notes[100];

    /
    printf("Entrez le nombre d'étudiants : ");
    scanf("%d", &nombre_etudiants);


    for (int i = 0; i < nombre_etudiants; i++) {
        printf("Entrez la note de l'étudiant %d : ", i + 1);
        scanf("%f", &notes[i]);
    }

    int choix;
    do {
        // Afficher le menu
        printf("\n--- Menu ---\n");
        printf("1. Calculer la moyenne des notes\n");
        printf("2. Trouver la note la plus élevée et la plus basse\n");
        printf("3. Afficher les notes supérieures à la moyenne\n");
        printf("4. Compter les étudiants ayant validé\n");
        printf("5. Compter les étudiants en rattrapage\n");
        printf("6. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choix);



    return 0;
}
