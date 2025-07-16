#include<stdio.h>
#include<string.h>
void checkchar(char str[],char ch);
int main(){ 
    char str[]="Tonmoy";
    char ch='y';
    checkchar(str,ch);

}
void checkchar(char str[],char ch){
    for (int i=0;str[i] !='\0';i++)
    if (str[i]==ch)
    {
        printf("character is present");
        return; // finish the fucntion here ,no extension
    }
    printf("not present");
}