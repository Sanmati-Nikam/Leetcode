
class Solution {
public:

    string reverseWords(string s) {
       string ans,temp="";
        int cnt=0;
       for(int i=0;i<s.size();i++){
           if(s[i]!=' '){
               ans+=s[i];
               continue;
           }
           if(ans=="")
               continue;
           if(!temp.empty())
           temp=ans+' '+temp;
           else temp=ans;
           ans="";
           cnt++;
           
       }
        if(cnt==0)
            temp=ans;
        else if(ans!=""){
            temp=ans+' '+temp;
        }
        return temp;
    }
};