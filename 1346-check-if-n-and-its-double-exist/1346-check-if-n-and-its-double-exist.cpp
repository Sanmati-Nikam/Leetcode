class Solution {
public:
    bool checkIfExist(vector<int>& a) {
         unordered_map<int,int>m; 
        for(auto i:a) m[i]++; 
        for(auto i:a) if(m[i*2] and (i!=0 or m[0]>=2) ) return true;
        return false;
    }
};