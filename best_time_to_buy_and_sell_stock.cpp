class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],p=prices[0]-min;
       for(int i=1;i<prices.size();i++){
           if(min>prices[i]){
               min=prices[i];
           }
           if(p<prices[i]-min)
               p=prices[i]-min;
       } 
        return p;
    }
};