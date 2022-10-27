class Solution {
public:
    bool isVowel(char ch){
        ch=tolower(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int i=0,k=s.size()-1;
        while(i<k){
            if(isVowel(s[i])){
                while(k>=0 && !isVowel(s[k]))
                    k--;
                int temp=s[i];
                s[i]=s[k];
                s[k--]=temp;
            }
            i++;
        }
        return s;
    }
};