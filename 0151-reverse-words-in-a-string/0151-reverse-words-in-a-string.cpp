
class Solution {
public:

    string reverseWords(string s) {
       string ans,temp="";
        int cnt=0;
       for(int i=0;i<s.size();i++){
           if(s[i]!=' '){
               ans+=s[i];
               //if(ch!='\0')
               continue;
           }
           if(ans=="")
               continue;
          //cout<<ans<<" "<<temp<<"p"<<endl;
           if(!temp.empty())
           temp=ans+' '+temp;
           else temp=ans;
          // cout<<temp;
           ans="";
           cnt++;
           
       }
        //cout<<cnt;
        if(cnt==0)
            temp=ans;
        else if(ans!=""){
            temp=ans+' '+temp;
        }
        //cout<<temp;
        return temp;
    }
};