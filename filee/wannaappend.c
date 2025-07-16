#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","a");
    if(fptr ==NULL){printf("file doesn't exist");}
     else {
    
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'g');
    fprintf(fptr,"%c\n",'o');

    fclose(fptr);

     }
    
    return 0;
}