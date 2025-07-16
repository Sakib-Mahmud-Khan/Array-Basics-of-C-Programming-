#include<stdio.h>

void swap(int a,int b);
void _swap(int *a,int *b);

int main(){ int x=3,y=5;
         
    //by call not swapped
    swap(x,y);
    printf("x is %d and y is %d\n",x,y);
    
     // by reference
     _swap(&x,&y);
     printf("x is %d and y is %d",x,y);
     return 0;
}

void swap(int a,int b){
    int t=a;
       a=b;
        b=t;
}
void _swap(int *a, int *b) {
    int t = *a; // t takes a,then a takes b,then b takes t..one cant take twice
    *a= *b;
    *b = t;
}

