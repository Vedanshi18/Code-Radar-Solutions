#include <stdio.h>
int main(){
    int n,pos;
    scanf("%d%d",&n,&pos);
    int a=1<<pos;
    n=n|a;
    printf("%d",n);
    return 0;
}