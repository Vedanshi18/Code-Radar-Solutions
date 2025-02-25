#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int c = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; // Remove newline character

    int i = 0;

    // Skip leading spaces
    while (s[i] == ' ') {
        i++;
    }

    // Count words separated by spaces
    for (; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] != '\0') {
            c++;
        }
    }

    // If the string is not empty, count the first word
    if (strlen(s) > 0 && s[0] != '\0' && s[0] != ' ') {
        c++;
    }

    printf("%d", c);
    return 0;
}
