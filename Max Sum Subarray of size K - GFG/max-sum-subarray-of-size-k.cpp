//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long max(long a,long b){
        return a>b?a:b;
    }
    long maximumSumSubarray(int k, vector<int> &nums , int N){
        long ans=0;
        long start=0,end=0,sum=0;
        for(long i=0;i<N;i++){
            if(end-start==k){
                sum-=nums[start];
                start++;
            }
            sum+=nums[i];
            ans=max(ans,sum);
            end++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends