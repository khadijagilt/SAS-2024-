#include <stdio.h>

int main(){
    double a, b, somme, produit, quotient;
    printf("saisis le nomber:\n ");
    scanf("%f", &a);
    printf("saisis le nomber:\n ");
    scanf("%f", &b);
   somme = a + b;
   produit = a * b; 
   quotient = a / b;
   printf("la somme est %f.\n", somme);
   printf("produit est %f.\n", produit);
   printf("quotient  est %f.\n", quotient);
}