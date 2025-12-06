class Solution {
  public:
    int gcd(int a, int b) {
        int  dividend, divisor;
        if (a>b){
            dividend =a;
            divisor=b;
        }
        else{
            dividend =b;
            divisor =a;
        }
        int quotient,rem,gcd,i;
        for ( i=0;rem!=0;i++){
            quotient =dividend/divisor;
            rem = dividend%divisor;
             if(rem==0)
                break;
            gcd =rem;
            dividend= divisor;
            divisor=rem;
            
        }
        if (i==0)
            return  divisor;
        return gcd;
    }
};
