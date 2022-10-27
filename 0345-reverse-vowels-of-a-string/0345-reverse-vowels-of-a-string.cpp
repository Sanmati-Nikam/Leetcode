class Solution {
public:
bool isVow(char c){
        return c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u'
            || c == 'A' || c == 'I' || c == 'E' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<end){
            while(start<s.size() && !isVow(s[start])){
                start++;
            }
            while(end>=0 && !isVow(s[end])){
                end--;
            }
            if(start<end){
            swap(s[start++],s[end--]);
            }
        }
      return s;  
    }
};