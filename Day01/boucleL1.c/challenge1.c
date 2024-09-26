#include <stdio.h>

int main() {
 int  nomber, i;
printf("entrez le nomber:");
scanf("%d", &nomber);
while(nomber < 0 || nomber > 10 ){
    printf("entrez le nomber :");
    scanf("%d", nomber);
}
   i = 1;
   while(i <= 10){
    printf(" %d * %d = %d", nomber, i, nomber * i);
    i++;


}
}

