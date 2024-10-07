#include <stdio.h>

int main(){

    int n,i;
    long long sum = 0, product = 1;
    int xi;
    scanf("%d", &n);

   for(i = 1; i <= n; i++){
   xi = 2 * i + 1;
   sum += xi;
   product *= xi;

   }

   printf("%lld", sum);
   printf("%lld", product);



    return 0;
}