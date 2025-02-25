#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",&s);
    int l=strlen(s);
    int c=0;
    for (int i=0; i<l;i++){
        char ch=s[i];
        if (ch==' ') {
            c++;
        }
    }
    printf("%d",s);
}