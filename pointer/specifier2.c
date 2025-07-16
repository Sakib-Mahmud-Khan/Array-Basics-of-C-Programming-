#include<stdio.h>

int main(){
    int age=22;
    int * ptr=&age;



    printf("%d\n",age); //value

     printf("%d\n",*ptr);

     printf("%d",*(&age));

}