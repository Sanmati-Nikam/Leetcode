class Solution {
public:
    int firstUniqChar(string s) {

        int m[128]= {};

        for (auto x: s)
            m[x]++;

        for(unsigned i = 0; i < s.size(); i++)
            if(m[s[i]] == 1)
                return int(i);

        return -1;
    }
};