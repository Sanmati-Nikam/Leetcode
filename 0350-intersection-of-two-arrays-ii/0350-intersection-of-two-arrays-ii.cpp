class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> occ1;
        vector<int> result;
        
        for (int num: nums1) {
            occ1[num]++;
        }
        
        for (int num: nums2) {
            auto itr = occ1.find(num);
            if (itr != occ1.end() && itr->second > 0) {
                result.push_back(num);
                --itr->second;
            }
        }
        return result;
    }
};