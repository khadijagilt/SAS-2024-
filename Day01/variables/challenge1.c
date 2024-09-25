#include <stdio.h>
int main() {
   char  nom[10], prenom[10], email[40], sexe[10];
int age;
printf("entey votre nom:");
scanf("%s", nom);
printf("enter votre prenom:");
scanf("%s", prenom);
printf("entrey votre email:");
scanf("%s", email);
printf("entrez votre sexe");
scanf("%s", sexe);
printf("entrez votre age:");
scanf("%d", &age);
printf("\n Informations Personnelles \n");
 printf("Nom : %s\n", nom);
printf("Penom : %s\n", prenom);
 printf("age : %d\n", age);
 printf("sexe : %s\n", sexe);
 printf("adresse email : %s\n", email);
}


