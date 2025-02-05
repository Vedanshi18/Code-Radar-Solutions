#include <stdio.h>
int main() {
    int a, s;
    scanf("%d%d",&a,&s);
    if(a>=18 && s==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}