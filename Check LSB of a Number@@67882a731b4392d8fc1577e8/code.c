// #include <stdio.h>

// int main() {
//     int a;
//     scanf("%d",&a);
//     if (a%2==0){
//         printf("Not Set");
//     }
//     else{
//         printf("Set");
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a&1){        // a & 0001  == 1
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}