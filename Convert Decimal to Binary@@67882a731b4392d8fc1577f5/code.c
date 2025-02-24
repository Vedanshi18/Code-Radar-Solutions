#include <stdio.h>
int main()
{
    long num,rem,place=1, bin=0;
    scanf("%d",&num);
    while(num){
        rem=num%2;
        bin=bin+(rem*place);
        num=num/2;
        place=place*10;
    }
    printf("%ld",bin);
    return 0;
}