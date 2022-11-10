class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int ans=0;
        for(int i=0;i<=(s.size()-k);i++){
            string temp=s.substr(i,k);
            if(stoi(temp)==0)
                continue;
            if(num%stoi(temp)==0)
                ans++;
        }
        return ans;
    }
};