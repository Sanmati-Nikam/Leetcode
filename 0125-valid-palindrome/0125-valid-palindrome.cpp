class Solution {
public:
    bool isPalindrome(string str) {
        int start=0,end=str.size()-1;
        cout<<end;
        while(start<end){
            while ((str[start]<48 || (str[start]>57 &&str[start]<65 ) ||
                (str[start]>90 && str[start]<97) || str[start]>122 ) && start<str.size()){
                cout<<str[start];
                start++;
            }
            cout<<start;
            while ((str[end]<48 || (str[end]>57 &&str[end]<65 ) ||
                (str[end]>90 && str[end]<97) || str[end]>122) && end>0){
                cout<<str[end];
                end--;
            }
            cout<<end;
           // cout<<str[start]<<str[end]<<" ";
            if(start<str.size()  && end>0){
                cout<<"in";
            if(tolower(str[start++])==tolower(str[end--])){
                cout<<start<<end<<" ";
                continue;
            }
                else return false;
            }
            else break;
            
        }
        return true;
    }
};