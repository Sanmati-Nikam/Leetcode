class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(1001,0),res;
        for(int i=0;i<nums1.size();i++){
            ans[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++){
            if(ans[nums2[j]]){
                res.push_back(nums2[j]);
                ans[nums2[j]]--;
            }
        }
        return res;
    }
};