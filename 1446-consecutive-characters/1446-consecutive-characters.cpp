class Solution {
public:
    int maxPower(string s) {
        int start=0,end=s.size()-1,ans=1,temp=1;
        while(start<end){
            while(s[start]==s[start+1]){
                temp++;
                start++;
            }
            if(ans<temp)
                ans=temp;
            temp=1;
            start++;
           
        }
        return ans;
    }
};