class Solution {
public:
    int titleToNumber(string c) {
        int ans=0;
        for(int i=0;i<c.size();i++){
             int d = c[i] - 'A' + 1;
             ans = ans * 26 + d;
        }
        return ans;
    }
};