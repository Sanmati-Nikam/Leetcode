class Solution {
public:
    bool isPalindrome(string str) {
        stack<char> s;
        string r,t;
        for(int i=0;i<str.length();i++){
            if((str[i]>=48 && str[i]<=57)||
        (str[i]>=65 && str[i]<=90)||
        (str[i]>=97 && str[i]<=122)) {
            t.push_back(tolower(str[i]));
            s.push(tolower(str[i]));
        }
            else continue;
        }
        while(!s.empty()){
            r.push_back(s.top());
            s.pop();
        }
        cout<<r<<" "<<t;
        for(int i=0;i<t.size();i++){
        if(t[i]==r[i])
            continue;
        else return false;
        }
        return true;
    }
};