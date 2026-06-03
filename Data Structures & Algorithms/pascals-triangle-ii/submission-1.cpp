class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans=1;
        vector<int>temp;
        temp.push_back(ans);
        for (int c=2;c<=rowIndex+1;c++){
            ans=ans*(rowIndex+2-c)/(c-1);//rowindex is 0 based so add 1
            temp.push_back(ans);//tc=o(row_index+1)
        }
        return temp;
    }
};