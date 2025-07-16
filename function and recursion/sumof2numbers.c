#include<stdio.h>
int sum(int a,int b);

int main(){
    int a,b;
    printf("enter your 1st number-");
    scanf("%d",&a);
    printf("enter your 2nd number-");
    scanf("%d",&b);

    int s=sum(a,b); // important line
    printf("sum is %d",s);
    return 0;

}

int sum(int a,int b){
    return a+b;
}