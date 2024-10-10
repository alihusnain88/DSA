class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<vector<int>> arr(rows, vector<int>(cols));

        for (int i = 0; i < cols; i++) {
            for (int j = 0; j < rows; j++) {
                arr[i][j] = matrix[i][j];
            }
        }

        for (int i = 0; i < cols; i++) {
            for (int j = 0; j < rows; j++) {
                matrix[i][j] = arr[j][i];
            }
        }

        return matrix;
    }
};
