#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    for (i=1; i<=n; i++){
        for (j='A'; j<=i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}