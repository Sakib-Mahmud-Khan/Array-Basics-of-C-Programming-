#include<stdio.h>
void reverse(int arr[],int n);
void printarr(int arr[],int n);

int main(){  
    int arr[] ={1,2,3,4,5};
    reverse(arr,5);
     printarr(arr,5);
    return 0;

}

void reverse(int arr[],int n) {
    for(int i=0;i<n/2;i++) {
        int firstvalue=arr[i];  // first one in box
        int secondvalue=arr[n-i-1]; // last one in box
        arr [i]=secondvalue;
        arr[n-i-1]=firstvalue;
    } }
   void printarr(int arr[],int n) {
        for (int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
    }
