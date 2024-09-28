#include <stdio.h>

int main(){
    int n, s, i;
    printf("entrez le nomber entier :");
    scanf("%d", &n);
    s = 0;
    for( i = 1 ; i<= n ; i ++){
       s = s + i;
    }
    printf("  la somme des n premiers nombres naturels est %d.\n", s);
}
