#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};
void information(struct student s1); // like void print(int a);
int main(){ struct student s1 ={"Tonmoy",2345,3.98};
         information (s1);

}
void information(struct student s1){ 
    printf("Student Information:\n");
    printf("name:%s\n", s1.name);
    printf("roll:%d \n",s1.roll);
    printf("cgpa:%f \n",s1.cgpa);


}