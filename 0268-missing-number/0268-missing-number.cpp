class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=nums.size()*(nums.size()+1)/2,s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        return sum-s;
    }
};