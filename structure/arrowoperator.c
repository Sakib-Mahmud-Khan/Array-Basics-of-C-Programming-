#include<stdio.h>
#include<string.h>

struct student{
    char name [100];
    int roll;
    float cgpa;

};
int main(){
     struct student s1={"Tonmoy",1234,3.99};
   
     struct student *ptr=&s1;
      
      printf("roll no with pointer:%d\n",(*ptr).roll);
      printf("roll no with array operator:%d\n",ptr->roll);

}