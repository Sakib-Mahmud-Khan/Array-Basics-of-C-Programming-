#include<stdio.h>
void printhello(); //declaration or prototype

int main(){

    printhello(); // function call
    printhello();
    return 0;
}

void printhello(){ //function definition
    printf("Hello\n");
    printf("my\n");
}