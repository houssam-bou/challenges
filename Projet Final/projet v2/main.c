#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nom[100][40];
char prenom[100][40];
int telephone[100];
int age[100];
char statut[100][40];
int reference[100];
char date[100][40];
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
    printf("3. traiter\n");
    printf("4. annuler\n");
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

switch (choix_statut) {
        case 1:
            strcpy(statut[x], "valider");
            break;
        case 2:
            strcpy(statut[x], "reporter");
            break;
        case 3:
            strcpy(statut[x], "traiter");
            break;
        case 4:
            strcpy(statut[x], "annuler");
            break;
        default:
            printf("choix invalide statut par defaut mis a 'annuler'.\n");
            strcpy(statut[x], "annuler");
            break;
    }

    printf("entrez la date de reservation : ");
    scanf("%d", date[x]);

    reference[x] = x + 1;
    x++;
    printf("reservation ajoute avec succes reference: %d\n", reference[x - 1]);
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
