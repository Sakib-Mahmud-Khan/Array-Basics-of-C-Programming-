#include<stdio.h>
#include<string.h>

struct student{
    char name [100];
    int roll;
    float cgpa;

};
int main(){
    struct student EEE[100];
   // EEE[0].name="Tonmoy";
   strcpy(EEE[0].name,"Tonmoy");
    EEE[0].roll=23;
    EEE[0].cgpa=3.54;
     
    printf("Name is %s\n",EEE[0].name);
    printf("roll is %d\n",EEE[0].roll);
    printf("cgpa is %f\n",EEE[0].cgpa);
    return 0;

}