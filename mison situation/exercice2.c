#include <stdio.h>

int main(){
    float temperature_corporelle;
    printf("entrez votre temperature corporelle :");
    scanf("%f", temperature_corporelle);
    if( temperature_corporelle >= 38 ){
        printf("vous avez de la fievre.");
    }else{
        printf(" voter temperature est normale.");
    }
}