#include<stdio.h>

void table(int n);
int main(){
 int n;
 printf("enter your no-");
 scanf("%d",&n);
 table(n);  // argument or actual parameter in every fuction code
   return 0;

}

void table(int n){  //parameter or formal parameter
  for(int i=1;i<=10;i++){
    printf("%d\n",n*i);
  }
}