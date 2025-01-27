#include <stdio.h>

int main() {
    char a[],b[];
    scanf("%s%s",&a,&b);
    strcat(a,b);
    printf("You entered: %s",b);
    return 0;
}