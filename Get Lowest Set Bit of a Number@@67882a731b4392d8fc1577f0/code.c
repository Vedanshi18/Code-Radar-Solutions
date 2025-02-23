#include <stdio.h>
int main()
{
    int n,b,c=0;
    scanf("%d%d",&n,&b);
    n=n&(-n);
    while(n){
        n=n>>1;
        c++;
    }
    printf("%d",c);
    return 0;
}