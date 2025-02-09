#include <stdio.h>
int main() {
    int N,i,j;
    scanf("%d",&N);
    int k=1;
    for (i=1; i<=N; i++){       
        for (j=1; j<=i; j++){
            printf("%d ",k);
            k=~k;
        }
        printf("\n");
    }
    return 0;
}