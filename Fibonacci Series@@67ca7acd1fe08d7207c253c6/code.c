int nTerm(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    for (int i=1; i<=n-1; i++){
        return nTerm(n-1)+nTerm(n-2);
    }
}
void fibonacciSeries(int n){
    for (int i=1; i<=n; i++){
        printf("%d ",nTerm(i));
    }
}
