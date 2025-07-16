#include<stdio.h>
   struct addressoffivepeople{
    int house;
    int block;
    char city[100];
    char state[100];
   };
 
void printaddress(struct addressoffivepeople address);
int main(){
    printf("enter all information");

   struct addressoffivepeople address[5];

   printf("enter for first person:");
   scanf("%d",&address[0].house);
   scanf("%d",&address[0].block);
   scanf("%s",address[0].city);
   scanf("%s",address[0].state);
   printf("enter for second person:");
   scanf("%d",&address[1].house);
   scanf("%d",&address[1].block);
   scanf("%s",address[1].city);
   scanf("%s",address[1].state);
   printf("enter for third person:");
   scanf("%d",&address[2].house);
   scanf("%d",&address[2].block);
   scanf("%s",address[2].city);
   scanf("%s",address[2].state);
   printf("enter for fourth person:");
   scanf("%d",&address[3].house);
   scanf("%d",&address[3].block);
   scanf("%s",address[3].city);
   scanf("%s",address[3].state);
   printf("enter for fifth person:");
   scanf("%d",&address[4].house);
   scanf("%d",&address[4].block);
   scanf("%s",address[4].city);
   scanf("%s",address[4].state);
   
   printaddress(address[0]);
   printaddress(address[1]);
   printaddress(address[2]);
   printaddress(address[3]);
   printaddress(address[4]);


}    
 void printaddress(struct addressoffivepeople address){
    printf("address is :%d,%d,%s,%s",address.house,address.block,address.city,address.state);
 }