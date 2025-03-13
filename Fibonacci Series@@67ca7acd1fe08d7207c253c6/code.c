int nTerm(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return nTerm(n-1)+nTerm(n-2);
}
void fibonacciSeries(int n){
    for (int i=1; i<=n; i++){
        printf("%d ",nTerm(i));
    }
}
