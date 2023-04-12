int commonFactors(int a, int b){
    int c=0;
    int s = a<b ? a : b;
    for(int i=1; i<=s; i++) {
        if(a%i==0 && b%i==0) c++;
    }
    return c;
}