// #include <stdio.h>
// int main() {
//     int n,i,j,k;
//     scanf("%d",&n);
//      for (i=1; i<=n; i++){
//         k=0;
//         for (j=1; j<=n-i; j++){
//             printf(" ");
//         }
//         for (j=1; j<=i; j++){
//             k++;
//             printf("%d",k);
//         } 
//         for (j=1; j<=i-1; j++){
//             k--;
//             printf("%d",k);
//         }  
//         printf("\n"); 
//      }
//     return 0;
// }

#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        for (j=1; j<=n-i; j++) {
            printf(" ");
        }
        for (j=1; j<=i; j++) {
            printf("%d", j);
        }
        for (j=i-1; j>=1; j--) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}