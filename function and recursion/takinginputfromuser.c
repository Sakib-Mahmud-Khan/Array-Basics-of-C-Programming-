#include<stdio.h>

void Bangladeshi();
void Indian();

int main() {
    
    printf("enter b for bangladesh and enter i for indian-");
    char ch;
    scanf("%c",&ch);
    if (ch=='b'){Bangladeshi();}
    else {Indian();}
    return 0;

}
void Bangladeshi(){
    printf("Bangladeshiiii");
}
void Indian(){
    printf("Indian");
}