#include <stdio.h>

int main(){

int a,b,k, sum = 0, temp;
scanf("%d %d", &a, &b);
scanf("%d", &k);

if( a > b){
    temp = a;
    a = b;
    b = temp;
}

for(int i = a; i <= b; i++ ){
if(i % k == 0)
sum += i;
}

printf("%d", sum);


    return 0;
}