#include<stdio.h>
#include<math.h>

float rectanglearea(float a,float b);

int main(){ 
    float a=5.0;
    float b=3.0;
    printf("area is %f",rectanglearea(a,b));

}
float rectanglearea(float a,float b){
         return a*b;
}