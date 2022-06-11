class Solution {
public:
    double myPow(double x, int n) {
        double p=1.0;
        long num = n;        
        if(num<0) num*=-1;
        while(num){
            if(num%2){
                p=p*x;
                num-=1;
            }
            else{
                x=x*x;
                num/=2;
            }
        }
         if(n<0)  p= 1.0/p;
        return p;
    }
};