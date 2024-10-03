#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nom[100][40];
char prenom[100][40];
int telephone[100];
int age[100];
char status[100][40];
int reference[100];
int date[100];
int choix;
int x = 0;

//declaration de menu .
void menu(){
    printf("       Menu Principal :\n");
    printf("1. Ajouter une reservation :\n");
    printf("2. Modifier  une reservation :\n");
    printf("3. Supprimer une reservation :\n");
    printf("4. Afficher les details d'une reservation :\n");
    printf("5. Tri des reservations :\n");
    printf("6. Recherche des reservations :\n");
    printf("7. Statistiques :\n");
    printf("8. quitter. \n");

    printf("entrer votre choix :");
    scanf("%d", &choix);
}
//declaration de statut .
void menu_statut() {
    printf("Choisissez le statut:\n");
    printf("1. valider\n");
    printf("2. reporter\n");
    printf("3. annuler\n");
    printf("4. traiter\n");
}

//declaration de ajouter .
void ajouter() {
    printf("entrez les informations suivantes pour la reservation:\n");

    printf("entrez le nom: ");
    scanf("%s", nom[x]);
    printf("entrez le prenom: ");
    scanf("%s", prenom[x]);
    printf("entrez le telephone: ");
    scanf("%d", &telephone[x]);
    printf("entrez l'age: ");
    scanf("%d", &age[x]);

    menu_statut();
    int choix_statut;
    printf("Choisissez une option: ");
    scanf("%d", &choix_statut);
}

int main()
{
    while (1) {
        menu();
        switch (choix){
            case 1 :
                ajouter();
                break;
            case 2 :
                printf("");
                break;
            case 3 :
                printf("");
                break;
            case 4 :
                printf("");
                break;
            case 5 :
                printf("");
                break;
            case 6 :
                printf("");
                break;
            case 7 :
                printf("");
                break;
            case 8 :
                printf("");
                return 0;
           //quitter le programme .
            default:
                printf("\n\n\nnumber incorrect. entrer une autre choix .\n\n");
        }
    }

    return 0;
}
