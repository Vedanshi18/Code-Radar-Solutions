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
    n[l]='\0';
    if n==s{
        printf("Yes");
    }
    else printf("No");
}
