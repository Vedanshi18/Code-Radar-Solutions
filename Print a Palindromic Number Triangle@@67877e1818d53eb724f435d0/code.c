#include <stdio.h>

int main() {
    int n,i,j,k;
    scanf("%d",&n);
     for (i=1; i<=4; i++){
        k=1;
        for (j=1; j<=i; j++){
            printf("%d",k);
            k++;
        } 
        for (j=1; j<=i-1; j++){
            k--;
            printf("%d",k);
        }  
        printf("\n"); 
     }
    return 0;
}