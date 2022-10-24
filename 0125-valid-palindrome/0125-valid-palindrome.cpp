class Solution {
public:
    bool isPalindrome(string str) {
        int start=0,end=str.size()-1;

        while(start<end){
            while (!isalnum(str[start]) && start<end)
                start++;

            if(start==str.size()) return true;
            while (!isalnum(str[end]) && start<end)
                end--;
            
            if(end==0) return true;
            
            if(tolower(str[start++])==tolower(str[end--]))
                continue;
    
            else return false;
            
        }
        return true;
    }
};