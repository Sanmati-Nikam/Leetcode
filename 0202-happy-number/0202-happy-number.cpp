class Solution {
public:
    bool isHappy(int number) {
        int num=number;
        while(num>0){
            int n=num,x=0;
            while(n>0){
                x+=((n%10)*(n%10));
                n/=10;
            }
            if(x==1)
                return true;
            if(x==4)
                return false;
            num=x;
        }
        return false;
    }
};