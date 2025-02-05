#include <stdio.h>

int main() {
    int n,c=0;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        if (n%i==0) {c++;}
    }
    if (c>2){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}