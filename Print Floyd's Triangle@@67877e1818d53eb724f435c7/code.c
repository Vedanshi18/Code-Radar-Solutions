#include <stdio.h>

int main() {
    int N,i,j;
    scanf("%d",&N);
    for (i=1; i<=N; i++){
        int k=1;
        for (j=1; j<=i; j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}