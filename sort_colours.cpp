class Solution {
public:
    void sortColors(vector<int>& arr) {
    int i=0,z=0,one=0,two=0;
    for(int i=0;i<arr.size();i++)
        {if(arr[i]==0) z++; else if(arr[i]==1) one++; else if(arr[i]==2) two++;}
    i=0;
    while(z>0)
    {
        arr[i] = 0;
        z--;
        i++;
    }
    while(one>0)
    {
        arr[i] = 1;
        one--;
        i++;
    }
    while(two>0)
    {
        arr[i] = 2;
        two--;
        i++;
    }
    
}
};