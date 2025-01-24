#include <stdio.h>

char* welcome() {
    int a;
    scanf("%d",&a);
    return ("You entered: %d",a);
}

int main() {
    string z=welcome();
    printf("%s", z);
    return 0;
}