#include <stdio.h>
int main() {
    int i=1,j,N;
    scanf("%d",&N);
    while(i<=N){
        j=1;
        while(j<=N){
            if(j<=(3-i)){
            printf(" ");
            }
            else if(j>(3-i) && j<=(3+i-1)){
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