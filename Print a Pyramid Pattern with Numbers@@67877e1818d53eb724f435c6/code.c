#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for (i=1; i<=n; i++){
        for (j=1; j<=2*i-1; j++){
            if (j<i-n || j>n){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}