#include <stdio.h>
int isPrime(int num){
    int c=0;
    if(num<2){
        return 0;
        }
    for (int j=2; j<num; j++){
        if (num%j==0){
            c++;
        }
    }
    if(c>0){
            return 0;
        }
    else{ 
        return 1;
    }
}