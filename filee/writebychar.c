#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    if(fptr ==NULL){printf("file doesn't exist");}
     else {
      printf( "%c\n", fgetc(fptr));
      printf( "%c\n", fgetc(fptr));
      printf( "%c\n", fgetc(fptr));
      printf( "%c\n", fgetc(fptr));
      printf( "%c\n", fgetc(fptr));
      


 

     }
    
    return 0;
}