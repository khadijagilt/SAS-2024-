#include <stdio.h>
int main(){

 float  C;
 printf("entrez la température en Celsius: ");
 scanf("%f", &C);
if(C < 0) {
    printf("l'état de l'eau à cette température est solide.\n");
} else if(C >= 0 && C < 100){
    printf("l'état de l'eau à cette température est Liquide.\n ");
} else if(C >=100){ 
    printf("l'état de l'eau à cette température est gaz.\n");
}
} 