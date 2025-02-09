#include <stdio.h>
int main() {
    int N,i,j,k;
    scanf("%d",&N);
    
    for (i=1; i<=N; i++){  
        int k=1;     
        if(i%2==0){
            k=0;
        }
        else{
            k=1;
        }
        for (j=1; j<=i; j++){
            printf("%d ",k);
            k=k^1;
        }
        printf("\n");
    }
    return 0;
}