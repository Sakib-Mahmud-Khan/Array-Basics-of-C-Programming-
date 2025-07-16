#include<stdio.h>
void printnumbers(int arr[],int n); // int *ptr or * arr also can be used

int main(){ 
    int arr[] = {1,2,3,4,5,6};
    printnumbers(arr,6);
    return 0;

    
}      //int arr[] or int *ptr or *arr can be used
void printnumbers(int arr[],int n){
    for(int i=0;i<n;i++)
    {printf("%d\t",arr[i]);}

}
