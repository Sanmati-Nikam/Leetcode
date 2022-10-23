class Solution {
public:
    int firstUniqChar(string s) {
        map<char,pair<int,int>> m;
        for(int i=0;i<s.size();i++){
            m[s[i]].first=i;
            m[s[i]].second++;
        }
        for(int i=0;i<s.size();i++){
            if(m[s[i]].second==1)
                return m[s[i]].first;
        }
        return -1;
    }
};