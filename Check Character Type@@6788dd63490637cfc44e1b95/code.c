#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    char b;
    scanf("%c",&a);
    if (isalpha(a)){
        b=tolower(a);
        if(a=='a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        if ((a>=0)&&(a<=9)){
            printf("Digit");
        }
        else{
            printf("Consonant");
        }
    }
    return 0;
}