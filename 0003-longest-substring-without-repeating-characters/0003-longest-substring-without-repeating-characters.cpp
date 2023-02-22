class Solution {
public:
    int max(int a,int b){
        return a>b?a:b;
    }
    int lengthOfLongestSubstring(string s) {
        int ans=0,i=0,j=0;
        set<char> m;
        while(j<s.size()){
            if(m.find(s[j])==m.end()){
                m.insert(s[j]);
                ans=max(ans,m.size());
                j++;
            }
            else {
                m.erase(s[i++]);
            }
        }
        return ans;
    }
};