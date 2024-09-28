#include <stdio.h>
int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b + c || b >= a + c || c >= b + a){
        printf("The sticks are not triangle");
    }
    else{
         printf("The sticks are triangle");
    }

 return 0;



}


