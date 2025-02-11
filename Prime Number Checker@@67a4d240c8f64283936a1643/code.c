#include <stdio.h>
int isPrime(int a){
    int c=0;
    for (int j=1; j<=a; j++){
        if (a%j==0){
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
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
}