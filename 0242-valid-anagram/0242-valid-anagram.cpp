class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size()!=t.size()) return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0;i<s.length();i++){
        //     if(s[i]!=t[i])
        //         return false;
        // }
        // return true;
        
        
        // map<char,int> m;
        // for(int i=0;i<s.size();i++)
        //     m[s[i]]++;
        // for(int i=0;i<t.size();i++){
        //     m[t[i]]--;
        // }
        // for(int i=97;i<=122;i++){
        //     if(m[i]!=0)
        //         return false;
        // }
        // return true;
        
        if(s.size()!=t.size()) return false;
        vector<int> v1(26,0),v2(26,0);
        for(int i=0;i<s.size();i++){
            v1[s[i]-'a']++;
            v2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(v1[i]!=v2[i])
                return false;
        }
        return true;
            
    }
};