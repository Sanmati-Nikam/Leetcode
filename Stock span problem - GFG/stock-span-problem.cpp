//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    
    vector <int> calculateSpan(int price[], int n)
    {
       stack<pair<int,int>> s;
       vector<int> ans;
       for(int i=0;i<n;i++){
           while(!s.empty()){
               if(s.top().first>price[i]){
                    ans.push_back(i-s.top().second);
                    break;
                   
               }
               else{
                 s.pop();
               } 
               
           }
           if(s.empty()) ans.push_back(i+1);
           pair<int,int> p;
           p.first=price[i];
           p.second=i;
           s.push(p);
           
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
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends