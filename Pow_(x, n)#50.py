class Solution {
    public double myPow(double x, long n){
        if(n == 0) return 1.0;
        if(n == 1) return x;
        if(n < 0) return myPow(1/x, -n);
        double result = myPow(x*x, n/2);
        if(n%2 == 1) result = result * x;
        return result;
    }
    public double pow_util(double x, int n){
        return myPow(x, n);
        
    }}
