class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> ms;
        map<char,char> mt;
        for(int i=0;i<s.size();i++){
            if(ms.find(s[i])!=ms.end()||mt.find(t[i])!=mt.end()){
                if(ms[s[i]]!=t[i] || mt[t[i]]!=s[i])
                    return false;
            }
            ms[s[i]]=t[i];
            mt[t[i]]=s[i];
        }
        return true;
    }
};