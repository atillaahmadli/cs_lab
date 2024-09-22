#include <stdio.h>

int main (){

int number;

printf("enter the number\n");
scanf("%d", &number);

if (number % 6 == 0) {

    printf("Excellent!\n");
}
else if (number % 2 == 0 || number % 3 == 0){
    printf("OK!\n");
}

else {

    printf("No!\n");
}



}