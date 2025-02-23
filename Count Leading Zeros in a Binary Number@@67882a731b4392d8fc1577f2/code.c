#include <stdio.h>
int main()
{
    int n,b,c=32;
    scanf("%d%d",&n,&b);

    while(n){
        n=n>>1;
        c--;
    }
    printf("%d",c);
    return 0;
}