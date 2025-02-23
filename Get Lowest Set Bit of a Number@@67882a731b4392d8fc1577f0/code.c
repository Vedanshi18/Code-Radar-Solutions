#include <stdio.h>
int main()
{
    int n,b;
    scanf("%d%d",&n,&b);
    n=n&(-n);
    printf("%d",n);
    return 0;
}