class Solution {
public:
    
    void rotate(vector<vector<int>>& A) {
        int i=0,j=A.size()-1;
        while(i<j){
            swap(A[i],A[j]);
            i++;
            j--;
        }

        for (int i = 0; i < A.size(); i++)
            for (int j = i+1; j < A.size(); j++){
                swap(A[i][j], A[j][i]);
            }
    
        
    }
};