class Solution {
public:
     int majorityElement(vector<int>& nums) {
    //using hashmap
    //     map<int,int> m;
    //     int max=0,pos=-1;
    //     for(int i=0;i<nums.size();i++){
    //             m[nums[i]]++;
    //             if(m[nums[i]]>nums.size()/2)
    //                return nums[i];
    //         }
    //     return -1;
    //using sort
         // sort(nums.begin(),nums.end());
         // int mid=nums.size()/2;
         // return nums[mid];
     int n = nums.size();        
        int majority, count = 0;        
        for (int i = 0; i < n; ++i) {
            if (count == 0) {
                majority = nums[i];
                ++count;
            }
            else if (nums[i] != majority)
                --count;
            else 
                ++count;
        }
         return majority;
    }
};