#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("any.txt","r");
    if(fptr ==NULL){printf("file doesn't exist");}
     else {
    int ch;

    fscanf(fptr,"%d",&ch);
    printf("character=%d\n",ch);
     fscanf(fptr,"%d",&ch);
    printf("character=%d\n",ch);
     fscanf(fptr,"%d",&ch);
    printf("character=%d\n",ch);
     
    fclose(fptr);

     }
    
    return 0;
}