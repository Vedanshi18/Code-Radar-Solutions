#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",&s);
    int l=strlen(s);
    char n[l+1];
    int k=l-1;
    for (int i=0; i<l; i++){
        n[i]=s[k];
        k--;
    }
    n[1]='\0';
    printf("%s",n);
}
