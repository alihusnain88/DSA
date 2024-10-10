class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
       
        for(int i=0; i<rows; i++){
            if(matrix[i][cols-1]==target){
                return matrix[i][cols-1];
            }
            
            else if(matrix[i][cols-1]>target){
                for(int k=0; k<cols; k++){
                    if(matrix[i][k]==target){
                        return true;
                    }
                }
            }
        }
         return false;        
    }
};