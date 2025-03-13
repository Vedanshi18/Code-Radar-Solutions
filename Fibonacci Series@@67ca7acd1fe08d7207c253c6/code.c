void fibonacciSeries(int n){
    for (int i=1; i<=n; i++){
        printf("%d ",nTerm(n));
    }
}
int nTerm(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    for (int i=1; i<=n-2; i++){
        return nTerm(n-1)+nTerm(n-2);
    }
}