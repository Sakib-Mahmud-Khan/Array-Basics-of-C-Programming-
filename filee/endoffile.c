#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    if(fptr ==NULL){printf("file doesn't exist");}
     else {
        char ch;
        ch=fgetc(fptr);
        while(ch != EOF){
            printf("%c",ch);
            ch=fgetc(fptr);
        }
        printf("\n");

   
    fclose(fptr);

     }
    
    return 0;
}