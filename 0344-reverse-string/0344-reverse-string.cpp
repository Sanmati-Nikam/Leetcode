class Solution {
public:
    void help(vector<char>& s, int start, int end){
        if(start == s.size()/2)
            return;
        help(s,start+1,end-1);
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
    }
    void reverseString(vector<char>& s) {
        help(s,0,s.size()-1);
    }
};