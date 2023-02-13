class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            cout<<mid;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target) {
                start=mid+1;
            }
            else {
                ans=mid;
                end=mid-1;
            }
        }
        if(ans==-1) return nums.size();
        return ans;
    }
};