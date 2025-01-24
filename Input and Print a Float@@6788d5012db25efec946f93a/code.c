#include <stdio.h>

char* welcome() {
    float a;
    scanf("%f",&a);
    return ("%f",a);
}

int main() {
    printf("%s", welcome());
    return 0;
}