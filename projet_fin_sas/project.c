#include <stdio.h>
#include <string.h>
#define Max_reservations 50

typedef struct Reservation{
    char nom[50];
    char prenom[50];
    char telephone[15];
    int age;
    char status[10]; 
    float reference;
    char date[12];
}Reservation;

Reservation reservations[Max_reservations];

float reference_unique = 0.1;
int reservation_count = 0;

void menu(){
    
        printf("1. Ajouter une reservation\n");
        printf("2. Modifier une réservation\n");
        printf("3. Supprimer une réservation\n");
        printf("4. afficher une réservation\n");
        printf("5. Rechercher une réservation par le nom\n");
        printf("6. rechercher une reservation par le reference\n");
        printf("7. Calculer les statistiques\n");
        printf("8. nombre des patients par tranche dage\n");
}

float generate_reference(){
    return reference_unique + 0.1;
}

void ajouter_une_reservation() {
    if (reservation_count >= Max_reservations) {
        printf("Nous avons atteint la limite des réservations disponibles.\n");
        return;
    }

    Reservation new_reservation;

    printf("Entrer le nom: ");
    scanf("%s", new_reservation.nom);
    printf("Entrer le prenom: ");
    scanf("%s", new_reservation.prenom);
    printf("Entrer le numéro du Téléphone: ");
    scanf("%s", new_reservation.telephone);
    printf("Entrer l'age: ");
    scanf("%d", &new_reservation.age);
    printf("Entrer le status (validé, reporté, annulé, traité): ");
    scanf("%s", new_reservation.status);
    printf("Entrer la date: ");
    scanf("%s", new_reservation.date);

    new_reservation.reference = generate_reference();
    reservations[reservation_count] = new_reservation;
    reservation_count ++;

    printf("Reservation est ajoutée avec succès sous la référence : %f\n", new_reservation.reference);
}


void modifier_une_reservation() {
    float reference; int i;
    printf("Entrer la référence de la réservation à modifier: ");
    scanf("%f", &reference);

    for ( i = 0; i < reservation_count; i++) {
        if (reservations[i].reference == reference) {
            printf("Entrer le nouveau nom: ");
            scanf("%s", reservations[i].nom);
            printf("Entrer le nouveau prenom: ");
            scanf("%s", reservations[i].prenom);
            printf("Entrer le nouveau numéro de téléphone: ");
            scanf("%s", reservations[i].telephone);
            printf("Entrer le nouveau âge: ");
            scanf("%d", &reservations[i].age);
            printf("Entrer le nouveau status: ");
            scanf("%s", reservations[i].status);
            printf("Entrer la nouveau date de reservation: ");
            scanf("%s", reservations[i].date);
            printf("la reservation est modifiée avec succès.\n");
            return;
        }
    }
    printf("Aucune réservation n'a été trouvée avec cette référence.\n");
}

void supprimer_une_reservation() {
    int i, j; float reference;
    printf("Entrer la  référence de la réservation a supprimer: ");
    scanf("%f", &reference);

    for (i = 0; i <= reservation_count - 1; i++) {
        if (reservations[i].reference == reference) {
            for (j = i; j < reservation_count - 1; j++) {
                reservations[j] = reservations[j + 1]; 
            }
            reservation_count --;
            printf("La réservation est suprimée.\n");
            return;
        }
    }

    printf("Impossible de trouver la réservation.\n");
}

////////////////////////////

void afficher_une_reservation() {
    int i; float reference;
    printf("Entrer la référence de la réservation que vous souhaitez voire: ");
    scanf("%f", &reference);

    for (i = 0; i < reservation_count; i++) {
        if (reservations[i].reference == reference) {
            printf("Nom: %s\n", reservations[i].nom);
            printf("Prénom: %s\n", reservations[i].prenom);
            printf("Telephone: %s\n", reservations[i]. telephone);
            printf("Âge: %d\n", reservations[i].age);
            printf("Status: %s\n", reservations[i].status);
            printf("La date de la réservation: %s\n", reservations[i].date);
            printf("Reference: %f\n", reservations[i].reference);
            return;
        }
    }
    printf("La reservation n'existe pas.\n");
}

///////////////

void rechercher_une_reservation_par_nom() {
    char name[50];
    printf("Entrer le nom: ");
    scanf("%s", name);

    for (int i = 0; i < reservation_count; i++) {
        if (strcmp(reservations[i].nom, name) == 0) {
            printf("La reference: %d\n",reservations[i].reference);
            printf(" Prenom: %s", reservations[i].prenom);
            printf(" Telephone: %s", reservations[i].telephone);
            printf(" Âge: %d", reservations[i].age);
            printf(" Status: %s", reservations[i].status);
            printf(" Date: %s", reservations[i].date);
            return;
        }
    }

    printf("Reservation n'existe pas.\n");
}
///////////////

void rechercher_une_reservation_par_reference() {
    float Reference;
    printf("Entrer le reference: ");
    scanf("%f", &Reference);

    for (int i = 0; i < reservation_count; i++) {
        if (reservations[i].reference, Reference) {
            printf("Le nom: %s\n",reservations[i].nom);
            printf(" Prenom: %s", reservations[i].prenom);
            printf(" Telephone: %s", reservations[i].telephone);
            printf(" Âge: %d", reservations[i].age);
            printf(" Status: %s", reservations[i].status);
            printf(" Date: %s", reservations[i].date);
            return;
        }
    }

    printf("Reservation n'existe pas.\n");
}


void calcule_des_statistiques() {
    int i, total_age = 0;
    for (i = 0; i < reservation_count; i++) {
        total_age += reservations[i].age;
    }
    double moyenne = total_age / reservation_count;
    if (reservation_count > 0) {
        printf("Âge moyen des patients: %.2f\n", moyenne);
    } else {
        printf("Aucune réservation n'est disponible pour calculer les statistiques.\n");
    }
}
void nombre_des_patients_par_tranche_age() {
    int categore1 = 0;
    int categore2 = 0;
    int categore3 = 0;
    
    for (int i = 0; i < reservation_count; i++) {
        if (reservations[i].age >= 0 && reservations[i].age <= 18) {
            categore1 ++;
        } else if (reservations[i].age >= 19 && reservations[i].age <= 35) {
            categore2++;
        } else if (reservations[i].age >= 36) {
            categore3 ++;
        }
    }
    printf("Nombre de patients âgés de 0 à 18 ans : %d\n", categore1);
    printf("Nombre de patients âgés de 19 à 35 ans : %d\n", categore2);
    printf("Nombre de patients âgés de 36 ans et plus : %d\n", categore3);
}

int main(){
    int choix;

    strcpy(reservations[reservation_count].nom,"khadija");
    strcpy(reservations[reservation_count].prenom, "abkir");
    strcpy(reservations[reservation_count].telephone, "070876543");
    reservations[reservation_count].age = 20;
    strcpy(reservations[reservation_count].status,"valide");
    reservations[reservation_count].reference = 0.11;
    strcpy(reservations[reservation_count].date, "29-12-2024");
    reservation_count++;
    strcpy(reservations[reservation_count].nom, "nawal");
    strcpy(reservations[reservation_count].prenom, "aitaissa");
    strcpy(reservations[reservation_count].telephone, "060877654");
    reservations[reservation_count].age = 19;
    strcpy(reservations[reservation_count].status,"traite");
    reservations[reservation_count].reference = 0.6;
    strcpy(reservations[reservation_count].date, "10-10-2024");
    reservation_count++;
    strcpy(reservations[reservation_count].nom, "abdlilah");
    strcpy(reservations[reservation_count].prenom, "lghrisi");
    strcpy(reservations[reservation_count].telephone, "078765437");
    reservations[reservation_count].age = 22;
    strcpy(reservations[reservation_count].status,"valide");
    reservations[reservation_count].reference = 0.2;
    strcpy(reservations[reservation_count].date, "2-10-2024");
    reservation_count++;
    strcpy(reservations[reservation_count].nom, "mbark");
    strcpy(reservations[reservation_count].prenom, "abkir");
    strcpy(reservations[reservation_count].telephone,"067876543");
    reservations[reservation_count].age = 40;
    strcpy(reservations[reservation_count].status,"valide");
    reservations[reservation_count].reference = 0.7;
    strcpy(reservations[reservation_count].date, "20-11-2024");
    reservation_count++;
    strcpy(reservations[reservation_count].nom, "nil");
    strcpy(reservations[reservation_count].prenom, "gogo");
    strcpy(reservations[reservation_count].telephone, "05466432");
    reservations[reservation_count].age = 28;
    strcpy(reservations[reservation_count].status,"annule");
    reservations[reservation_count].reference = 0.5;
    strcpy(reservations[reservation_count].date, "22-9-2024");
    reservation_count++;
    strcpy(reservations[reservation_count].nom, "lolo");
    strcpy(reservations[reservation_count].prenom,"lil");
    strcpy(reservations[reservation_count].telephone, "075578975");
    reservations[reservation_count].age = 17;
    strcpy(reservations[reservation_count].status, "traite");
    reservations[reservation_count].reference = 0.3;
    strcpy(reservations[reservation_count].date, "20-12-2024");
    reservation_count++;
    strcpy(reservations[reservation_count].nom, "mohemmed");
    strcpy(reservations[reservation_count].prenom, "ali");
    strcpy(reservations[reservation_count].telephone, "065678907");
    reservations[reservation_count].age = 54;
    strcpy(reservations[reservation_count].status,"traite");
    reservations[reservation_count].reference = 0.4;
    strcpy(reservations[reservation_count].date, "20-11-2024");
    reservation_count++;
    strcpy(reservations[reservation_count].nom, "manal");
    strcpy(reservations[reservation_count].prenom, "manal");
    strcpy(reservations[reservation_count].telephone, "079876544");
    reservations[reservation_count].age = 23;
    strcpy(reservations[reservation_count].status,"valide");
    reservations[reservation_count].reference = 0.23;
    strcpy(reservations[reservation_count].date, "02-11-2024");
    reservation_count++;
    strcpy(reservations[reservation_count].nom, "youssef");
    strcpy(reservations[reservation_count].prenom, "nosir");
    strcpy(reservations[reservation_count].telephone, "069776532");
    reservations[reservation_count].age = 30;
    strcpy(reservations[reservation_count].status,"annule");
    reservations[reservation_count].reference = 0.24;
    strcpy(reservations[reservation_count].date, "20-10-2024");
    reservation_count++;
    strcpy(reservations[reservation_count].nom,"sara");
    strcpy(reservations[reservation_count].prenom,"binl");
    strcpy(reservations[reservation_count].telephone, "069876544");
    reservations[reservation_count].age = 6;
    strcpy(reservations[reservation_count].status,"reporte");
    reservations[reservation_count].reference = 0.3;
    strcpy(reservations[reservation_count].date,"2-10-2024");
    reservation_count++;

    menu();
    printf("\n choisir selon le nombre la fonctionnalite souhaitee: ");
    scanf("%d", &choix);
     switch(choix) {
            case 1:
                ajouter_une_reservation();
                break;
            case 2:
                modifier_une_reservation();
                break;
            case 3:
                supprimer_une_reservation();
                break;
            case 4:
                afficher_une_reservation();
                break;
            case 5:
                rechercher_une_reservation_par_nom();
                break;
            case 6:
                rechercher_une_reservation_par_reference();
                break;
            case 7:
                calcule_des_statistiques();
                break;
            case 8:
                nombre_des_patients_par_tranche_age();
                break;    
            default:
                printf("Invalid choix.\n");
        }
    
    
}