class Solution {
public:
//    =
    string convertToTitle(int c) {
        string op;
        int n=c,l=0,cnt=0,x;
        while(n>0){
            int x=--n%26;
            n/=26;
            op+=char(x+65);
        }
        reverse(op.begin(),op.end());
        cout<<endl;
        return op;
    }
};