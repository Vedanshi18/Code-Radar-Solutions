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

int countLeadingZeros(int n) {
    if (n == 0) return 32; // All bits are zero

    int count = 0;
    for (int i = 31; i >= 0; i--) { // Check each bit from the left
        if ((n >> i) & 1) break;    // Stop when the first set bit is found
        count++;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = countLeadingZeros(n);
    printf("Number of leading zeros: %d\n", result);

    return 0;
}
