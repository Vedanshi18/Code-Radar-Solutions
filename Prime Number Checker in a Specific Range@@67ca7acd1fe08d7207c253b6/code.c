void printPrimesInRange(int a,int b){
    int p=0;
    for (int i=a; i<=b; i++){
        int c=0;
        for (int j=1; j<=i; j++){
            if(i%j==0) c++;
        }
        if(c==2) {
            printf("%d ",i);
            p++;
        }
    }
    if (p==0){
        printf("No prime numbers");
    }
}