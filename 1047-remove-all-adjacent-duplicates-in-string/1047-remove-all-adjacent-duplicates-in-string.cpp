class Solution {
public:
    string removeDuplicates(string s) {
        string res = "";
        for(char& ch : s)   ch == res.back() ? res.pop_back() : res.push_back(ch);
        return res;
    }
};

// class Solution {
// public:
//     string makeGood(string s) {
//         for(int i=s.size()-1;i>0;i--){
//             if(abs(s[i]-s[i-1])==32)
//                 s.erase(i-1,2);
//         }
//         return s;
//     }
// };