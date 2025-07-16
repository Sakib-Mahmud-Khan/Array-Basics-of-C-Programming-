//fib(n)=fib(n-1)+fib(n-2)
// 0,1,1,2,3,5,8,13,21 
// first one is fibonacci of zero(0)

#include<stdio.h>
#include<math.h>

int fib(int n);

int main(){
    printf("fibonacci is %d",fib(6));
    
}
int fib(int n){if(n==0 || n==1){

    if(n==0){return 0;}
    if(n==1){return 1;}
}





    int fibNM1=fib(n-1);
    int fibNM2=fib(n-2);
    int fibNM=fibNM1 + fibNM2;
}
