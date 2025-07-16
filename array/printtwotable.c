#include<stdio.h>
void table(int arr[][10],int n,int m,int number);
int main(){ int tables[2][10];
    table(tables,0,10,2); // o is row
    table(tables,1,10,3); //1 is row

    for(int i=0;i<10;i++) 
    {printf("%d\n",tables[0][i]);}


   for(int i=0;i<10;i++) 
    {printf("%d\t",tables[1][i]);}
}
void table(int arr[][10],int n,int m,int number){
    for(int i=0;i<m;i++) // n will be constant
    {arr[n][i]=number *(i+1);}
}