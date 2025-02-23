#include <stdio.h>
int main()
{
    int n,b;
    scanf("%d%d",&n,&b);
    n=n^(1<<b);
    printf("%b",n);
    return 0;
}