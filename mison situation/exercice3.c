#include <stdio.h>

int main(){
    int n;
    printf("entrez un entier:");
    scanf("%d", &n);
   while(n % 1 == 0 ){
   if( n >= 2 && n <= (n - 1 )){
    printf(" ce nest pas un nombre premier");  
  }else{
        printf(" cest un nombre premier.");
    }
   }

}