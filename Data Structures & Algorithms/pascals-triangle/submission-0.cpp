class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>temp;
        
        for (int r=1;r<=numRows;r++){
            vector<int>temporary;
            int ans=1;
            temporary.push_back(ans);
            for (int c=2;c<=r;c++){//o(n2)=tc
                ans=ans*(r-c+1)/(c-1);
                temporary.push_back(ans);
                
            }
            temp.push_back(temporary);
        }
        return temp;
    }
};