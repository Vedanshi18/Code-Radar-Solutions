#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int max=a[i];
    int min = a[i];
    for(int i=0;i<n; i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    printf("%d %d",min,max);
}