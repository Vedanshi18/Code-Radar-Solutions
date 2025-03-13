int isPrime(int num){
    if (num==0 || num==1) return 0;
    if (num==2 || num==3) return 1;
    if(num%2==0) return 0;
    for (int i=3; i<=sqrt(num); i=i+2){
        if (num%i==0) return 0;
    }
}
void printPrimesInRange(int a, int b){
    int found=0;
    for (int i=a; i<=b: i++){
        if(isPrime(i)==1){
            printf("%d ",i);
            found=1;
        }
    }
    if(found==0){
        printf("No prime numbers");
    }
}

// //My Method
// void printPrimesInRange(int a,int b){
//     int p=0;
//     for (int i=a; i<=b; i++){
//         int c=0;
//         for (int j=1; j<=i; j++){
//             if(i%j==0) c++;
//         }
//         if(c==2) {
//             printf("%d ",i);
//             p=1;
//         }
//     }
//     if (p==0){
//         printf("No prime numbers");
//     }
// }
// // OPTIMAL & EFFICIENT
// int isPrime(int num) {
//     if (num < 2) return 0;  // 0 and 1 are not prime
//     if (num == 2 || num == 3) return 1;  // 2 and 3 are prime
//     if (num % 2 == 0) return 0;  // Eliminate even numbers (except 2)

//     for (int i = 3; i <= sqrt(num); i += 2) {  // Check odd numbers up to sqrt(n)
//         if (num % i == 0) return 0;
//     }
//     return 1;
// }

// // Function to print primes in range
// void printPrimesInRange(int a, int b) {
//     int found = 0;
//     for (int i = a; i <= b; i++) {
//         if (isPrime(i)) {
//             printf("%d ", i);
//             found = 1;
//         }
//     }
//     if (!found) {
//         printf("No prime numbers");
//     }
//     printf("\n");
// }
