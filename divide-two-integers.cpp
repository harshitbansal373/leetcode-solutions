class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(divisor==1) return dividend;
        
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        
        long long ans=0;
        long long a = abs(dividend);
        long long b = abs(divisor);
        int c=0;
        while(a>=b){
            a=a-b;
            c++;
        }
        
        if(dividend<0 && divisor<0){
            return c;
        }else if(dividend>=0 && divisor>=0){
            return c;
        }else{
            return -c;
        }
    }
};
