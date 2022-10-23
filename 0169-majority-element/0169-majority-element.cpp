class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                if(++c==nums.size()/2+1)
                    return nums[i];
            }
            else c=1;
        }
        return nums[0];
    }
};