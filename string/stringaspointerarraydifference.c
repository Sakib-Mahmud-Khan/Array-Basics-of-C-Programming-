#include<stdio.h>
int main(){
    char *canchange="Hello World";
    puts(canchange);
    canchange="tonmoy";
    puts(canchange);
    char cannotchange[]="Hello World";
    puts(cannotchange);
    cannotchange="Tonmoy"
 // dont give the option to change when using array  
 }