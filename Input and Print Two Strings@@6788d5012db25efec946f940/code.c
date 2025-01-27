#include <stdio.h>

int main() {
    char a[100],b[100];
    scanf("%s%s",&a,&b);
    strcat(a,b);
    printf("You entered: %s",b);
    return 0;
}