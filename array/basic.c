#include<stdio.h>

int main(){
    //phy -97 chem 98 math 90

    int marks[3];
    
    printf("enter phy-");
    scanf("%d",&marks[0]);
     printf("enter chem-");
    scanf("%d",&marks[1]); 
    printf("enter math-");
    scanf("%d",&marks[2]);

    printf("phy =%d,chem=%d,math=%d",marks[0],marks[1],marks[2]);
}