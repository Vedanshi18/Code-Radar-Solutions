#include <stdio.h>

char* welcome() {
    int a;
    scanf("%d",&a);
    return "You entered: %d",a;
}

int main() {
    printf("%d", welcome());
    return 0;
}