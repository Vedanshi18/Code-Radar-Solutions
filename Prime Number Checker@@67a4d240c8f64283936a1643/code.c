#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printd("%d\n",isPrime(n));
    }
}
int isPrime(n){
    int c=0;
    for (int j=1; j<=n; j++){
        if (n%j==0){
            c++;
        }
        if(c>2){
            return 0;
        }
        else{ return 1;}
    }
}