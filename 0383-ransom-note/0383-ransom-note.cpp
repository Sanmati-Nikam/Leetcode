class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        
        int m[128]={0};
        int i=0,j=0;
        while(i<ransomNote.size())
            m[ransomNote[i++]-97]++;
        
        while(j<magazine.size())
            m[magazine[j++]-97]--;
        for(int k:ransomNote){
            if(m[k-97]>0)
                return false;
        }
        return true;
    }
};