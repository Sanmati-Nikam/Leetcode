class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for(int i=0;i<matrix.size();i++){
            if(matrix[0].size() == 1){
                if(matrix[i][0] == target)
                    return true;
                continue;
            }
            if(target>matrix[i][matrix[0].size()-1]){
                if(i==matrix.size())  break;
            }
            else if(target == matrix[i][0] || target == matrix[i][matrix[0].size()-1])
                return true;
            
            else if(target > matrix[i][0] && target < matrix[i][matrix[0].size()-1]){
                
                for(int j = 0; j < matrix[0].size(); j++){
                    if(matrix[i][j] == target)
                        return true;
                }
            }
        }
        return false;
    }
};

        //int n=matrix.size();
        //int m=matrix[0].size();
        //int row=0 , col = m-1;
        //while(row<n and col >=0){
        //    int res= matrix[row][col];
        //    if(res==target) return true;
        //    else if(res >=target) col--;
        //    else row++;
        //}
        //return false;
