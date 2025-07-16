#include<stdio.h>
int sum(int n);
int main(){
 printf("sum is %d",sum(5));
 return 0;
}

int sum(int n){ 
    if (n==1)
    {return 1;}

    int SUMNM1=sum(n-1); //nm means n minus 1
    int SUMN=SUMNM1+n;

    return SUMN;
}