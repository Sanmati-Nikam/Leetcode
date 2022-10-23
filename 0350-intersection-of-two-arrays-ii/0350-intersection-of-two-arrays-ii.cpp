class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> m;
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++){
            if(m[nums2[j]]){
                ans.push_back(nums2[j]);
                m[nums2[j]]--;
            }
        }
        return ans;
    }
};