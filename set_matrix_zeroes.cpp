class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector <pair<int,int>> vec;
  
       for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[0].size();j++){
               if(matrix[i][j]==0)
                   vec.push_back(make_pair(i,j));
           }
       } 
        for(int k =0;k<vec.size();k++){
            int row = vec[k].first;
            int col = vec[k].second;
            for(int i=0;i<matrix.size();i++){
                matrix[i][col]=0;
            }
            for(int i=0;i<matrix[0].size();i++){
                matrix[row][i]=0;
            }
            
        }
    }
};