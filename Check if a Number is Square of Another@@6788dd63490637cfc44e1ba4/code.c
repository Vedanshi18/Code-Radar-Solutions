#include <stdio.h>

int main() {
    int a,b,sq;

    scanf("%d%d",&a,&b);
    sq=b*b;
    if(sq==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}