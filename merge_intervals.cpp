class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& s) {
        vector<vector<int>> x; int i;
       if(s.size()==1){
                 return s;
             }
        sort(s.begin(),s.end());
         for(i=0;i<s.size()-1;i++){
              int temp= s[i][0];
             
                 while(s[i][1]==s[i+1][0] || s[i][1]>s[i+1][0]){
                    s[++i][1] =max(s[i][1],s[i+1][1]);
                     if(i==s.size()-1) break;
                }
             s[i][0]=temp;
             x.push_back(s[i]);
            
         }
        if(i!=s.size()){
        if(s[i-1][1]==s[i][0] || s[i-1][1]>s[i][0])
            s[i][1]=max(s[i+1][1],s[i][1]);
        x.push_back(s[i]);
        }
        return x;
    }
};