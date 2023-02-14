class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start=0,end=nums.size()-1,loc=end;
        vector<int> ans(nums.size());
        while(start<=end){
            if(nums[end]*nums[end]>nums[start]*nums[start]){
                ans[loc--]=nums[end]*nums[end--];
            }
            else {
                ans[loc--]=nums[start]*nums[start++];
            }
        }
        return ans;
    }
};