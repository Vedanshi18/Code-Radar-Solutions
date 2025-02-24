#include <stdio.h>
int main()
{
    int num,rem,place=1,bin=0;
    scanf("%d",&num);
    while(num){
        rem=n%2;
        bin=bin+(rem*place);
        num=num/2;
    }
    printf("%d",bin);
    return 0;
}