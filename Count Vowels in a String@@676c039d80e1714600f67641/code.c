#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",&s);
    int l=strlen(s);
    int c=0;
    for (int i=0; i<l; i++){
        char ch=tolower(s[i]);
        if (ch=='a'|| ch=='e'|| ch=='i' || ch=='o'|| ch=='u'){
            c++;
        }
    }
    printf("%d",c);
}
