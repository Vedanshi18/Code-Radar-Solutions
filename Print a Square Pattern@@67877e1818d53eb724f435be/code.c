#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int i=1; i<=N; i++){
        if (i==1 || i==N){
            for (int j=1; j<=N; j++){
                printf("* ");
            }
        }
        else{
            for (int j=1; j<=N; j++){
                if (j==1 || j==N){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}