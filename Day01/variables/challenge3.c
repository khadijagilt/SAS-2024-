#include <stdio.h>

int main(){
    float km, Yards, conversion = 1093.61;
    printf("entrez la distance en kilomètres:");
    scanf("%F", km);
    Yards = km *  conversion ;
    printf("la distance %f km est %f.\n", km, Yards);
}