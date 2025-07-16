#include<stdio.h>
#include<math.h>

int fact(int n);

int main(){ 
    printf("factorial is %d",fact(6));


}

int fact(int n){
    if (n==1)
    {return 1;}

    int NM1=fact(n-1);
    int NM=  NM1 *n;
    return NM;

}