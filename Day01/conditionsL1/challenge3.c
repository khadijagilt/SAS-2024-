#include <stdio.h>
int main() {
int num1, num2, somme;
 printf("Entrez le premier nombre entier: ");
 scanf("%d", &num1);
 printf("Entrez le deuxième nombre entier: ");
 scanf("%d", &num2);
 if (num1 == num2) {
 somme = 3 * (num1 + num2);  
    } else {
  somme = num1 + num2;  
    }
    printf("Le résultat est: %d\n", somme);
}  