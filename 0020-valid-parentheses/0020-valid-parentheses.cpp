class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else if((s[i]==')'||s[i]=='}'||s[i]==']') && st.empty())
                return false;
            else {
                char c=st.top();
                st.pop();
                cout<<c;
                if(s[i]==')' && c!='(' ||s[i]=='}' && c!='{' ||s[i]==']' && c!='[' )
                    return false;
                    
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};