// #include <stdio.h>
// int main()
// {
//     int n,c=32;
//     scanf("%d",&n);

//     while(n){
//         n=n>>1;
//         c--;
//     }
//     printf("%d",c);
//     return 0;
// }

#include <stdio.h>
int main() {
    int n,c=0;
    scanf("%d", &n);
    if(n==0){
        printf("32");
    }
    else{
    for (int i = 31; i >= 0; i--) { // Check each bit from the left
        if ((n >> i) & 1) break;    // Stop when the first set bit is found
        c++;
    }
    printf("%d",c);
    }
    return 0;
}
