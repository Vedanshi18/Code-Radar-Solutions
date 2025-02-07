#include <stdio.h>
int main() {
    int i=1,j,N;
    scanf("%d",&N);
    while(i<=N){
        j=1;
        while(j<=2 * N - 1){
            if(j<=(N-i)){
            printf(" ");
            }
            else if(j>(N-i) && j<=(N+i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}