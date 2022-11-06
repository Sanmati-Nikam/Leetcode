class Solution {
public:
    bool isPowerOfTwo(int n) {
        long int i=0;
        while(i<=n){
            if(n==pow(2,i))
                return true;
            //cout<<i<<n<<pow(2,i);
            if(n<pow(2,i))
                break;
            i++;
        }
        return false;
    }
};