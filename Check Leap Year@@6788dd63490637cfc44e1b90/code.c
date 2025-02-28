// #include <stdio.h>

// int main() {
//     int y;
//     scanf("%d",&y);
//     if (y%4==0){
//         if(y%100==0){
//             if(y%400==0){
//                 printf("Leap Year");
//             }
//             else{
//                 printf("Not a Leap Year");
//             }
//         }
//         else{
//             printf("Leap Year");
//         }
//     }
//     else{
//         printf("Not a Leap Year");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);  // Use '&y' to store the input value in 'y'

    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                printf("Leap Year");
            } else {
                printf("Not a Leap Year");
            }
        } else {
            printf("Leap Year");
        }
    } else {
        printf("Not a Leap Year");
    }

    return 0;
}