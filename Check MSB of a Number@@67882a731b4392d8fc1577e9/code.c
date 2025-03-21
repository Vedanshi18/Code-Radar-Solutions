#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=n>>31;
    if(n&1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    
    return 0;
}