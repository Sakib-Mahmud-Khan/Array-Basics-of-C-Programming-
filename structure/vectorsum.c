#include<stdio.h>
struct vector{
    int x;
    int y;
};
void calcsum(struct vector v1,struct vector v2,struct vector sum);
int main(){
struct vector v1={2,3}; //given all element x=2 and y=3
struct vector v2={7,9}; //given all element x=7 and y=9
struct vector sum={0};
calcsum(v1,v2,sum);

return 0;
} 
void calcsum(struct vector v1,struct vector v2,struct vector sum){
sum.x=v1.x+v2.x;
sum.y=v1.y+v2.y;
printf("sum of x is%d\n",sum.x);
printf("sum of y is%d\n",sum.y);
}