#include<stdio.h>
typedef struct bankaccount{
    int accountno;
    char name[100];
} acc;
int main(){
    acc firstaccount={1234,"Tonmoy"};
    acc secondaccount={484872789,"Sakib"};

    printf("account no:%d\n",firstaccount.accountno);
    printf("name:%s\n",firstaccount.name);
    printf("account no:%d\n",secondaccount.accountno);
    printf("name:%s\n",secondaccount.name);

}