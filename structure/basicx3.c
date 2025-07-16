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

    struct student s2;

    s2.roll=1200;
    s2.cgpa=3.78;
    //s2.name="Tonmoy"  can't use like that
    strcpy(s2.name,"Talha");

    printf("roll no:%d\n",s2.roll);
    printf("cgpa is %f\n",s2.cgpa);
    printf("my name is %s\n",s2.name);

    struct student s3;

    s3.roll=1230;
    s3.cgpa=3.85;
    //s3.name="Tonmoy"  can't use like that
    strcpy(s3.name,"Sakib");

    printf("roll no:%d\n",s3.roll);
    printf("cgpa is %f\n",s3.cgpa);
    printf("my name is %s\n",s3.name);

}
