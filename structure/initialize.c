#include<stdio.h>
#include<string.h>

struct student{
    char name [100];
    int roll;
    float cgpa;

};
int main(){
   
      struct student s1={"Tonmoy",1234,3.99};
      
      printf("roll no:%d\n",s1.roll);
      printf("cgpa is %f\n",s1.cgpa);
      printf("my name is %s\n",s1.name);

}