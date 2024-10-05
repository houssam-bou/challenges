#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nom[100][40];
char prenom[100][40];
char telephone[100][40];
char age[100][40];
char statut[100][40];
int reference[100];
char date[100][40];
int choix;
int choix_de_rech;
int x = 0;

// declaration de menu .
void menu()
{
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
// declaration de statut .
void menu_statut()
{
    printf("Choisissez le statut:\n");
    printf("1. valider\n");
    printf("2. reporter\n");
    printf("3. traiter\n");
    printf("4. annuler\n");
}

// declaration de ajouter .
void ajouter()
{
    printf("entrez les informations suivantes pour la reservation:\n");

    printf("entrez le nom: ");
    scanf("%s", nom[x]);
    printf("entrez le prenom: ");
    scanf("%s", prenom[x]);
    printf("entrez le telephone: ");
    scanf("%s", telephone[x]);
    printf("entrez l'age: ");
    scanf("%s", age[x]);

    menu_statut();
    int choix_statut;
    printf("Choisissez une option: ");
    scanf("%d", &choix_statut);

    switch (choix_statut)
    {
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
    scanf("%s", date[x]);

    reference[x] = x + 1;
    x++;
    printf("reservation ajoute avec succes reference: %d\n", reference[x - 1]);
}
// declaration de modifier .
void modifier()
{
    int reference_modif;
    printf("entrer la reference pour la modification = ");
    scanf("%d", &reference_modif);
    int found = 0;
    int i = 0;
    for (i = 0; i < x; i++)
        if (reference[i] == reference_modif)
        {
            printf("entrer une nouveau nom : ");
            scanf("%s", nom[i]);
            printf("entrer une nouveau prenom : ");
            scanf("%s", prenom[i]);
            printf("entrer une nouveau telephone : ");
            scanf("%s", telephone[i]);
            printf("entrer une nouveau age : ");
            scanf("%s", age[i]);
            printf("entrer une nouveau statut : ");
            scanf("%s", statut[i]);
            printf("entrer une nouvel date : ");
            scanf("%s", date[i]);

            printf("Les informations a ete mise a jour.\n");
            found = 1;
            break;
        }
    if (!found)
    {
        printf("reservation non trouvee.\n");
    }
}
// declaration de supprimer.
void supprimer()
{
    int ref_sup;
    printf("entrez la reference que vous souhaitez supprimer: ");
    scanf("%d", &ref_sup);

    int found = 0;
    for (int i = 0; i < x; i++)
    {
        if (reference[i] == ref_sup)
        {
            for (int f = i; f < x - 1; f++)
            {
                strcpy(nom[f], nom[f + 1]);
                strcpy(prenom[f], prenom[f + 1]);
                strcpy(telephone[f], telephone[f + 1]);
                strcpy(age[f], age[f + 1]);
                strcpy(statut[f], statut[f + 1]);
                strcpy(date[f], date[f + 1]);
                reference[f] = reference[f + 1];
            }
            x--;
            found = 1;
            printf("reservation supprimer avec succes.\n");
            break;
        }
    }
    if (!found)
    {
        printf("reservation non trouvee.\n");
    }
}
// declaration de afficher .
void afficher()
{
    printf("les details de reservations : \n");
    for (int i = 0; i < x; i++)
    {
        printf("reference: %d\n", reference[i]);
        printf("nom: %s\n", nom[i]);
        printf("prenom: %s\n", prenom[i]);
        printf("telephone: %s\n", telephone[i]);
        printf("age: %s\n", age[i]);
        printf("statut: %s\n", statut[i]);
        printf("date: %s\n", date[i]);
    }
}
void rechercher_par_reference()
{

    int reference_rech;
    int found = 0;
    printf("entrez la reference que vous recherchez: ");
    scanf("%d", &reference_rech);
    for (int i = 0; i < x; i++)
    {
        if (reference_rech == reference[i])
        {
            printf("reference: %d\n", reference[i]);
            printf("nom: %s\n", nom[i]);
            printf("prenom: %s\n", prenom[i]);
            printf("telephone: %s\n", telephone[i]);
            printf("age: %s\n", age[i]);
            printf("statut: %s\n", statut[i]);
            printf("date: %s\n", date[i]);
            found++;
            break;
        }
    }

    if (!found)
    {
        printf("reservation non trouvee.\n");
    }
}
void rechercher_par_nom()
{
    char nom_rech[20];
    int found = 0;

    printf("entrez la reference que vous recherchez: ");
    scanf("%s", &nom_rech);
    for (int i = 0; i < x; i++)
    {
        if (strcmp(nom_rech, nom[i]) == 0)
        {
            printf("reference: %d\n", reference[i]);
            printf("nom: %s\n", nom[i]);
            printf("prenom: %s\n", prenom[i]);
            printf("telephone: %s\n", telephone[i]);
            printf("age: %s\n", age[i]);
            printf("statut: %s\n", statut[i]);
            printf("date: %s\n", date[i]);
            found++;
            break;
        }
    }
    if (!found)
    {
        printf("reservation non trouvee.\n");
    }
}

void data()
{

    char fake_nom[10][40] = {"Dupont", "martin", "moreau", "lefevre", "bernard", "rousseau", "petit", "garnier", "lambert", "morel"};
    char fake_prenom[10][40] = {"claire", "lucas", "sophie", "julien", "emma", "antoine", "manon", "hugo", "chloe", "theo"};
    char fake_telephone[100][40] = {"06 67 89 01 23", "06 78 90 12 34", "06 89 01 23 45", "06 90 12 34 56", "06 01 23 45 67", "06 56 78 90 12", "06 45 67 89 01", "06 34 56 78 90", "06 23 45 67 89", " 06 12 34 56 78"};
    char fake_age[100][40] = {"21", "32", "30", "40", "34", "22", "27", "29", "37", "34"};
    char fake_statut[100][40] = {"reporter", "valider", "traiter", "annuler", "valider", "reporter", "traiter", "valider", "valider", "annuler"};
    char fake_date[100][40] = {"15/03/2023", "22/07/2022", "10/11/2021", "03/01/2024", "05/06/2023", "18/02/2023", "30/09/2022", "12/05/2024", "21/08/2023", " 27/12/2021"};

    for (int i = 0; i < 10; i++)
    {
        strcpy(nom[x], fake_nom[i]);
        strcpy(prenom[x], fake_prenom[i]);
        strcpy(telephone[x], fake_telephone[i]);
        strcpy(age[x], fake_age[i]);
        strcpy(statut[x], fake_statut[i]);
        strcpy(date[x], fake_date[i]);
        reference[x] = x + 1;
        x++;
    }
}

int main()
{
    data();
    while (1)

    {

        menu();

        switch (choix)
        {
        case 1:
            ajouter();
            break;
        case 2:
            modifier();
            break;
        case 3:
            supprimer();
            break;
        case 4:
            afficher();
            break;
        case 5:
            printf(" Tri des réservations ()");

            break;
        case 6:
            // choix de recherche .
            printf("1-recherchez Par referance :\n");
            printf("2-recherchez Par nom : \n");
            printf("entrer votre choix : ");
            scanf("%d", &choix_de_rech);
            switch (choix_de_rech)
            {
            case 1:
                rechercher_par_reference();
                break;
            case 2:
                rechercher_par_nom();
                break;
            default:
                printf("votre choix n'existe");
                break;
            }
            break;
        case 7:

            break;
        case 8:
            // quitter le programme .
            printf("vous avez quitter le programme .\n ");
            break;
        default:
            printf(" nombre incorrect. entrer une autre choix .\n\n");
        }
    }
    while (choix != 10);

    return 0;
}
