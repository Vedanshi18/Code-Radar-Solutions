#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    fgets(s,sizeof(s),stdin);
    int l=strlen(s);
    int c=0;
    for (int i=0; s[i]!='\0';i++){
        if (s[i]==' ' && s[i+1]!=' ' && s[i+1]!='\0') {
            c++;
        }
    }
    printf("%d",c+1);
}