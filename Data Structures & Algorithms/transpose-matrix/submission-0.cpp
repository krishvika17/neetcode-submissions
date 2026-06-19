class Solution {
   public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> transposed_matrix(n,vector<int>(m));
        for (int row = 0; row < m; row++) {
            for (int column = 0; column < n; column++) {
                transposed_matrix[column][row]=matrix[row][column];
            }
        }
        return transposed_matrix;
    }
};