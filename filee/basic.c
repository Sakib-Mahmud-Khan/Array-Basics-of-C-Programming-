#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    if(fptr ==NULL){printf("file doesn't exist");}
     else {
    char ch;

    fscanf(fptr,"%c",&ch);
    printf("character=%c\n",ch);
     fscanf(fptr,"%c",&ch);
    printf("character=%c\n",ch);
     fscanf(fptr,"%c",&ch);
    printf("character=%c\n",ch);
     fscanf(fptr,"%c",&ch);
    printf("character=%c\n",ch);
     fscanf(fptr,"%c",&ch);
    printf("character=%c\n",ch);
    fclose(fptr);

     }
    
    return 0;
}