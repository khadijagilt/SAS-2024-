#include <stdio.h>
int main() {
    float revenu_annuel;
    int score_credit, duree_pret;
     printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu_annuel);
   printf("Entrez votre score de crédit (sur 1000) : ");
    scanf("%d", &score_credit);
   printf("Entrez la durée du prêt (en années) : ");
    scanf("%d", &duree_pret);
 if (revenu_annuel >= 30000 && score_credit >= 700 && duree_pret <= 10) {
        printf("Vous êtes éligible pour le prêt.\n");
    } else if (revenu_annuel >= 30000 && score_credit >= 650 && duree_pret <= 15) {
        printf("Vous êtes éligible pour le prêt avec conditions.\n");
    } else {
        printf("Vous n'êtes pas éligible pour le prêt.\n");
    } 