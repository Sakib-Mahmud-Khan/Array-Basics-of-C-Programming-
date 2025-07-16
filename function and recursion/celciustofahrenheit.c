#include<stdio.h>
#include<math.h>

float convert(float celcius);

int main(){
 // float fahrenheit =convert(37); // it can be done in two ways
 printf("fahrenheit is %f",convert (37));
 return 0;
}

float convert(float celcius){
    float fahrenheit= (celcius * 9/5)+32;
    return fahrenheit;
}