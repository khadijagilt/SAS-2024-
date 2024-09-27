#include <stdio.h>

int main() {
    int nombre_entier_positif, factorielle = 1;

    printf("entrez le nombre entier : ");
    scanf("%d", &nombre_entier_positif);
    for(int i = 1 ; i <= nombre_entier_positif ; i ++ ){
        factorielle = factorielle * i;
    }
    printf("factorial of %d est %d.\n", nombre_entier_positif, factorielle);

} 
    