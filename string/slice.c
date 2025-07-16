#include<stdio.h>
#include<string.h>
void slice(char str[],int n,int m); //m  and n are valid
int main(){ char str[]="Helloworld";
    slice(str,3,6);
}
void slice(char str[],int n,int m){
    char newstr[100]; // by default assume but we know its size m-n+1
    int j=0;
    for(int i=n;i<=m;i++,j++)
    { newstr[j]=str[i];}
    newstr[j]='\0';
    puts(newstr);

}