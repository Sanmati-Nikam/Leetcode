class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
//       .  int r[128]={0};
//         int m[128]={0};
//         int i=0,j=0;
//         while(i<ransomNote.size())
//             r[ransomNote[i++]-97]++;
        
//         while(j<magazine.size())
//             m[magazine[j++]-97]++;
//         for(i=0;i<ransomNote.size();i++){
//             if(r[ransomNote[i]-97]>m[ransomNote[i]-97])
//                 return false;
//         }
//         return true;
        
        int m[128]={0};
        int i=0,j=0;
        while(i<ransomNote.size())
            m[ransomNote[i++]-97]++;
        
        while(j<magazine.size())
            m[magazine[j++]-97]--;
        for(i=0;i<ransomNote.size();i++){
            if(m[ransomNote[i]-97]>0)
                return false;
        }
        return true;
    }
};