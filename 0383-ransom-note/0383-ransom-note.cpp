class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m[128]={0};
        int i=0,j=0;
        while(j<magazine.size())
            m[magazine[j++]-97]++;
        while(i<ransomNote.size()){
            m[ransomNote[i]-97]--;
            if(m[ransomNote[i++]-97]<0)
                return false;
        }
        return true;
    }
};