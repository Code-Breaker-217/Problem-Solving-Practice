class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1.0;
        }
        
        double even_pow;
        if(n<0){
            even_pow = 1/myPow(x,abs(n)/2);
        }
        else{
            even_pow = myPow(x,n/2);
        }

        if(n%2==0){
            return even_pow*even_pow;
        }
        else{
            if(n>0) return x*even_pow*even_pow;
            else return 1/x*even_pow*even_pow;
        }
    }
};