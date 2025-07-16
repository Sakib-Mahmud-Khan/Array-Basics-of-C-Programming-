#include<stdio.h>
#include<string.h>

  struct student {
    int roll;
    float cgpa;
    char name[100];
  };
int main() {
    struct student s1;

    s1.roll=1230;
    s1.cgpa=3.85;
    //s1.name="Tonmoy"  can't use like that
    strcpy(s1.name,"Tonmoy");

    printf("roll no:%d\n",s1.roll);
    printf("cgpa is %f\n",s1.cgpa);
    printf("my name is %s\n",s1.name);
}