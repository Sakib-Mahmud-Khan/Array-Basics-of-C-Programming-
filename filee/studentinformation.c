#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Student.txt","w");
    if(fptr ==NULL){printf("file doesn't exist");}
     else { 
        char name[100];
        int age;
        float cgpa;
       
        printf("enter your name:");
        scanf("%s",name);
        printf("enter age:");
        scanf("%d",&age);
        printf("Enter cgpa:");
        scanf("%f",&cgpa);

        fprintf(fptr,"%s\t",name);
        fprintf(fptr,"%d\t",age);
        fprintf(fptr,"%f\t",cgpa);
      fclose(fptr);
         }
      return 0;
     }