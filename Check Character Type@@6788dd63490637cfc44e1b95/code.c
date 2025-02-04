#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    char b;
    scanf("%c",&a);
    if (isalpha(a)){
        b=tolower(a);
        if(b=='a' || b == 'e' || b == 'i' || b == 'o' || b == 'u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        if ((a>='0')&&(a<='9')){
            printf("Digit");
        }
        else{
            printf("Consonant");
        }
    }
    return 0;
}