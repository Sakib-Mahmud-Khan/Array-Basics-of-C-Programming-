#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","w");
    if(fptr ==NULL){printf("file doesn't exist");}
     else {
    
    fputc('M',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('g',fptr);
    fputc('o',fptr);
    


    fclose(fptr);

     }
    
    return 0;
}