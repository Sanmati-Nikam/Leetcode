class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // map<char,char> ms;
        // map<char,char> mt;
        // for(int i=0;i<s.size();i++){
        //     if(ms.find(s[i])!=ms.end()||mt.find(t[i])!=mt.end()){
        //         if(ms[s[i]]!=t[i] || mt[t[i]]!=s[i])
        //             return false;
        //     }
        //     ms[s[i]]=t[i];
        //     mt[t[i]]=s[i];
        // }
        // return true;
        
         char mp[128] = {0};
        char rmp[128] = {0};
        for (int i = 0; i < s.size(); i++) {
            if (!mp[s[i]] && !rmp[t[i]]) {
                mp[s[i]] = t[i];
                rmp[t[i]] = s[i];
                continue;
            }
            if (mp[s[i]] != t[i]) return 0;
        }
        return 1;
    }
};