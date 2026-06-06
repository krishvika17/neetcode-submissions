class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for (int i=0;i<n;i++){//rows
            for (int j=i;j<n;j++){//columns
                swap(matrix[i][j],matrix[j][i]);//transpose
            }
        }
        for (int k=0;k<n;k++){
            reverse(matrix[k].begin(),matrix[k].end());//o(n2)
        }
    }
};
