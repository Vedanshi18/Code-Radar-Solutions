#include <stdio.h>
int main(){
    int n,pos;
    scanf("%d%d",&n,&pos);
    int a=1<<pos;
    printf("%d",n|a);
    return 0;
}