#include<stdio.h>

//input
int main(){
    int anything[5];
    int *ptr=&anything[0]; // or int *ptr=anything
    for(int i=0 ;i<5; i++){
        printf("%d index-",i);
        scanf("%d",(ptr+i)); // or scanf("%d",anything[i]);

    }
    // output
    for(int i=0 ;i<5; i++){
        printf("%d index=%d\n",i,*(ptr+i));
         // or printf("%d index=%d\n",i,anything[i]);
    }



}