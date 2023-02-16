class Solution {
public:
    void reverse(string &s,int start,int end){
        int temp=end+1;
        while(start<end){
            swap(s[start++],s[end--]);
        }
        s[temp]=' ';
    }
    string reverseWords(string s) {
        int start=0,end=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i]== ' '){
                cout<<start<<" "<<end-1<<s[i]<<endl;
                reverse(s,start,end-1);
                start=i+1;
            }     
            ++end;
        }
        cout<<end;
        reverse(s,start,end-1);
        return s;
    }
};