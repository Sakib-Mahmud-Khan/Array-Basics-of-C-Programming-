#include<stdio.h>

void calc(int a,int b,int *sum,int *prod,int *avg);
int main(){ int a=4 ,b=6;
 int sum,prod,avg;
 calc(a,b,&sum,&prod,&avg);
 printf("sum is %d,prod is %d,avg is %d",sum,prod,avg);
 return 0;
 

}
void calc(int a,int b,int *sum,int *prod,int *avg){
    *sum =a+b;
    *prod =a*b;
    *avg = (a+b)/2;
}