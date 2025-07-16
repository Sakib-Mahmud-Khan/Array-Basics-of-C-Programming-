#include<stdio.h>
#include<string.h>

 typedef struct ElectricalandElectricalEngineering {
    char name[100];
    int roll;
    float cgpa;
} EEE;

int main(){
    EEE s1 ={"Tonmoy",2322,3.97};
    printf("Student Information:\n");
    printf("name:%s\n", s1.name);
    printf("roll:%d \n",s1.roll);
    printf("cgpa:%f \n",s1.cgpa);
}