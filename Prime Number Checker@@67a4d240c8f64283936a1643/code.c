#include <stdio.h>
int isPrime(int num){
    int c=0;
    for (int j=1; j<=num; j++){
        if(num==1 || num==0){
            return 0;
            break;
        }
        if (num%j==0){
            c++;
        }
    }
    if(c>2){
            return 0;
        }
    else{ 
        return 1;
    }
}