#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("odd.txt","w");
    if(fptr ==NULL){printf("file doesn't exist");}
     else { 
        int n;
       
        printf("enter n:");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
          if(i%2 !=0){fprintf(fptr,"%d\n",i);}
        }
        
      fclose(fptr);
         }
      return 0;
     }