#include <stdio.h>
int main() {
    float revenu_annuel_en_euros;
    int score_credit_sur_1000, duree_pret_en_années;
     printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu_annuel);
   printf("Entrez votre score de crédit (sur 1000) : ");
    scanf("%d", &score_credit);
   printf("Entrez la durée du prêt (en années) : ");
    scanf("%d", &duree_pret);
 if (revenu_annuel_en_euros >= 30000 && score_credit_sur_1000 >= 700 && duree_pret_en_années <= 10) {
        printf("Vous êtes éligible pour le prêt.\n");
    } else if (duree_pret_en_années >= 30000 && score_credit_sur_1000 >= 650 && duree_pret_en_années <= 15) {
        printf("Vous êtes éligible pour le prêt avec conditions.\n");
    } else {
        printf("Vous n'êtes pas éligible pour le prêt.\n");
    } 