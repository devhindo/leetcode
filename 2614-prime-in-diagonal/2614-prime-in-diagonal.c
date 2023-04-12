bool isPrime(int n) {
    if(n==2) return true;
    if(n<=1 || n%2==0) return false;
    for(int i=3; i*i<=n; i+=2) {
        if(n%i==0) return false;
    }
    return true;
}
int max(int a, int b) {
    return a>b ? a : b;
}
int diagonalPrime(int** nums, int numsSize, int* numsColSize){
    int i=0,j=0;
    int val = 0;
    while(i<numsColSize&&j<numsSize) {
        if(isPrime(nums[i][j])) val = max(val,nums[i][j]);
        i++;
        j++;
    }
    i=0;
    j=numsSize-1;
    while(i<numsColSize&&j>=0) {
        if(isPrime(nums[i][j])) val = max(val,nums[i][j]);
        i++;
        j--;
    }
    return val;
}