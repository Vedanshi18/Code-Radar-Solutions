#include <stdio.h>
int main(){
    int n,pos;
    scanf("%d%d",&n,&pos);
    int a=1<<n;
    printf("%d",n|a);
    return 0;
}