#include<stdio.h>
void printhello(); 
void goodbye();             //declaration or prototype

int main(){

    printhello();            // function call
    goodbye();
    printhello();
    return 0;
}

void printhello(){          //function definition
    printf("Hello\n");
   
}
void goodbye(){            //function definition
printf("goodbye\n");
}