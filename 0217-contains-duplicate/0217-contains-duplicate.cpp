class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
//         set<int> s;
//         for(int i=0;i<nums.size();i++){
         
//          if(s.find(nums[i])!=s.end())
//             return true;
//          s.insert(nums[i]);
//         }
//         return false;
        
    //     map<int,int> m;
    //     for(int i=0;i<nums.size();i++){
    //        if(m.find(nums[i])!=m.end())
    //            return true;
    //         m[nums[i]]++;
    //     }
    //     return false;
    // }
        
        unordered_set<int> s;
        for(int i:nums){
            if(s.insert(i).second==false)
                return true;
        }
        return false;
    }
};