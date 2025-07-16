#include<stdio.h>
float avg(float a,float b, float c);
int main(){ int a=90;
            int b=92;
            int c=93;
            printf("avg is %f",avg(a,b,c));
            return 0;


}
float avg(float a,float b, float c){
   return ((a+b+c)/3);
    
}