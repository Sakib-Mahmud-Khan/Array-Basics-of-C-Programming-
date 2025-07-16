#include<stdio.h>

int main(){
    int age=22;
    int _age=40;
    int *ptr=&age;
    int *_ptr=&_age;

    printf("%u,%udifference is %d\n",ptr,_ptr,*_ptr-*ptr);

    _ptr =& age;
    printf("comparison=%u",ptr==_ptr);
    return 0;


}
 
