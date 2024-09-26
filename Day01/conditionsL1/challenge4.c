#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, x, x1, x2, delta;
    printf("entrez a");
    scanf("%d", &a);
    printf("entrez b");
    scanf("%d", &b);
    printf("entrez c");
    scanf("%d", &c);
     x = (- b ) / 2 * a;
x1 = - b - sqrt(delta) / 2 * a;
x2 = - b + sqrt(delta) / 2 * a;
delta = pow(b,2) - 4 * a * c;
    if(delta < 0 ){
        printf("no solution");
    } else if( delta = 0 ) { 
printf(" lequation a une solution %d\n", x);
    }else( delta > 0 );
        printf(" lequation a deux solution :\n x1 = %d\n x2 = %d\n", x1, x2);
    }