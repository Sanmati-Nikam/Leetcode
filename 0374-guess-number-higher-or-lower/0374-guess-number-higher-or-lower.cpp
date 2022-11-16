class Solution {
public:
    int guessNumber(int n) {
        int start = 1, end = n,mid;
        
    while(start <= end){
            mid = end - (end - start)/2;
            if(guess(mid) == 0)
                return mid;
        
            else if(guess(mid) ==-1)
                end = mid-1;
            
            else
                start = mid+1; 
        }
        return -1;  
    }
};