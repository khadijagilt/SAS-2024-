#include <stdio.h>
int main(){
    int  année, Mois, Jours, Heures, Minutes, Secondes, choix;
    printf(" entrez lannee :");
    scanf("%d", année);
    année = 12 * Mois;
    année = 365 * Jours;
    année = 8760 * Heures;
    année = 525600 * Minutes;
    année = 36315000 * Secondes;
do{
    printf("entrez un choix: ");
    printf(" entrez 1 pour convertir au mois.\n");
    printf(" entrez 2 pour convertir au jours.\n");
    printf(" entrez 3 pour convertir au heures.\n");
    printf(" entrez 4 pour convertir au minutes.\n");
    printf(" entrez 5 pour convertir au secondes.\n");
    printf(" 6 quitter le programme.\n");
    scanf("%d", choix);
    switch (choix)
    {
    case 1:
        printf(" lannee %d = %d mois.\n", année, Mois);
        break;
    case 2:
        printf(" lannee %d = %d jours.\n", année, Jours);
        break;
    case 3:
        printf(" lannee %d = %d heures.\n", année, Heures);
        break;
    case 4:
        printf(" lannee %d = %d minutes.\n", année, Minutes);
        break;
     case 5:
        printf(" lannee %d = %d secondes.\n", année, Secondes);
        break;
    case 6:
        printf(" quitter le programme.\n", année, Secondes);
        break;   
    default:
    printf("erreur.choiser un choix enter 1 et 5");

    }
    
}while( choix != 6 );
    
}


