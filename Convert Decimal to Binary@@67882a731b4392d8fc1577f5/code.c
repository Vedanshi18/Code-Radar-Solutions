#include <stdio.h>
int main()
{
    int num,rem,place=1,bin=0;
    scanf("%d",&n);
    while(num){
        rem=n%2;
        bin=bin+(rem*place);
        num=num/2;
    }
    printf("%d",rem);
    return 0;
}