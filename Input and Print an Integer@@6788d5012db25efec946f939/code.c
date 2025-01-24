#include <stdio.h>

char* welcome() {
    int a;
    scanf("%d",&a);
    return "You entered: %d",a;
}

int main() {
    printf("%s", welcome());
    return 0;
}