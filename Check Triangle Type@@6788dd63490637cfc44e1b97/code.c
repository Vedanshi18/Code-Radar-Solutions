#include <stdio.h>

int main() {
    int a,b,c;
    if (a==b && b==c){
        printf("Equilateral");
    }
    else if ((a==b && b!=c)||(b==c && c!=a)||(a==c && b!=c)){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}