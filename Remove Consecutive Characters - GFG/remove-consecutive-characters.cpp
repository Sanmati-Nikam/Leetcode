//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string str)
    {
        string s;
         int start=0,end=str.size()-1;
         while(start<=end){
             while(str[start]==str[start+1] && start<end){
                 start++;
             }
             
             s.push_back(str[start]);
             
             start++;
             //cout<<start<<" ";
             
         }
         return s;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends