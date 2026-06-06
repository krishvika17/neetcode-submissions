class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {//better approach
        int n=matrix.size();
        int m =matrix[0].size();
        vector<int> row(n,0); //hash array for rows
        vector<int> col(m,0);//hash array for columns//sc=o(n+m);tc=o(n*m)
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j] == 0) {
                    row[i] = 1;//presence marked
                    col[j] = 1;
                }
            }
        }

        for(int i=0;i<n;i++) {//o(n*m)
            for (int j = 0; j < m; j++) {
                if(row[i]==1 || col[j]==1) {
                    matrix[i][j] = 0;
                }   
            }
        }
    }
};
