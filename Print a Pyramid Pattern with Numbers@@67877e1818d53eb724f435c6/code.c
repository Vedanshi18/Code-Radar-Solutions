#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for (i=1; i<=n; i++){
        k=1;
        for (j=1; j<2*n-1; j++){
            if (j<n-i+1 || j>=n+i-1){
                printf("  ");
            }
            else{
                printf("%d ",k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}