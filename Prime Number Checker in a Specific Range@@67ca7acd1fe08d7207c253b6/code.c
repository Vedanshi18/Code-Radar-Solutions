int isPrime(int num){
    if (num<2) return 0;
    if (num==2 || num==3) return 1;
    if(num%2==0) return 0;
//  for (int i = 3; i <= sqrt(num); i += 2)
    for (int i=3; i<num; i=i+2){ 
        if (num%i==0) return 0;
    }
    return 1;   //IMPORTANT 
}
void printPrimesInRange(int a, int b){
    int found=0;
    for (int i=a; i<=b; i++){
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