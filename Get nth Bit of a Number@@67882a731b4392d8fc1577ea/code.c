#include <stdio.h>
int main()
{
    int n,b;
    scanf("%d%d",&n,&b);
    n=n>>b;
    // if(n&1==1){
    //     printf("1");
    // }
    // else{
    //     printf("0");
    // }
        if(n^1==0){
        printf("1");
    }
    else{
        printf("0");
    }
    
    return 0;
}