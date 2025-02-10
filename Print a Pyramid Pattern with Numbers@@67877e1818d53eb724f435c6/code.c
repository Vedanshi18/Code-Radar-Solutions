#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for (i=1; i<=n; i++){
        k=1;
        for (j=1; j<=n-i; j++){
            printf(" ",k);
            }
        for (j=1; j<=i; j++){
            printf("%d ",j);
            k++;
        }
        
        printf("\n");
    }
    return 0;
}