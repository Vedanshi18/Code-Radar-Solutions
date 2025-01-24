#include <stdio.h>

char* welcome() {
    float a;
    scanf("%f",&a);
    return "You entered: %                             ";
}

int main() {
    printf("%s", welcome());
    return 0;
}