#include<stdio.h>
struct complex{
    int real;
    int imaginary;
};
int main(){
    struct complex number1={3,5};
    struct complex *ptr=&number1;
    printf("real part is:%d\n",ptr->real); // (*ptr).real
    printf("imaginary part is :%d\n",ptr->imaginary); // (*ptr).imaginary

}