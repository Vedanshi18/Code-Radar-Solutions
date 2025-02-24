#include <stdio.h>
void bubbleSort(arr,n){
    for (int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
void printArray(arr, n){
    for (int i=0; i<=n;i++){
        printf("%d ",arr[i]);
    }
}