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

    // Count words
    if (s[i] != '\0') {  // Count the first word if the string is not empty
        c = 1;
    }

    for (; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] != '\0') {
            c++;
        }
    }

    printf("%d\n", c);
    return 0;
}
