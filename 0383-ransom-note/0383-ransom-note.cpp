class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r[128]={0};
        int m[128]={0};
        //cout<<ransomNote[0];
        int i=0,j=0;
        while(i<ransomNote.size()){
          //  cout<<"ko";
            r[ransomNote[i++]-97]++;
        }
        while(j<magazine.size())
            m[magazine[j++]-97]++;
        // cout<<r[ransomNote[0]-97];
        // cout<<m[magazine[0]-97]<<endl;
        for(i=0;i<ransomNote.size();i++){
            if(r[ransomNote[i]-97]>m[ransomNote[i]-97])
                return false;
        }
        return true;
    }
};