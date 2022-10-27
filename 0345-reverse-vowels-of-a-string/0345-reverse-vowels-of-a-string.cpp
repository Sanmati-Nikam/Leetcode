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
        //for(int i=0;i<s.size();i++){
        while(i<k){
            if(isVowel(s[i])){
                while(k>=0 && !isVowel(s[k]))
                    k--;
                //cout<<s[i]<<" "<<s[k]<<" ";
                int temp=s[i];
                s[i]=s[k];
                s[k--]=temp;
            }
           // cout<<s<<endl;
            i++;
        }
        return s;
    }
};