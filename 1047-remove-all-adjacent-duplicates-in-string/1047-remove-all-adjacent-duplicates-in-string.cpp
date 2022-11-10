class Solution {
public:
    string removeDuplicates(string s) {
        for(int i=s.size()-1;i>0;i--){
            if(s[i]==s[i-1])
                s.erase(i-1,2);
        }
        return s;
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