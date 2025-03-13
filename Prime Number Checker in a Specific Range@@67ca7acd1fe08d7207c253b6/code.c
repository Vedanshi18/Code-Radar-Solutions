void printPrimesInRange(int a,int b){
    for (int i=a; i<=b: i++){
        int c=0;
        for (int j=2; j<i: j++){
            if(i%j==0) c++;
        }
        if(c==0) printf("%d ",i);
    }
    return 0;
}