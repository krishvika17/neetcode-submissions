class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs.size();
        for (int i=0;i<strs[0].length();i++){//character being compared in each element
            bool check=true;
            for (int j=0;j<n-1;j++){//element being compared in strs array
                if (i >= strs[j+1].length() || strs[j][i] != strs[j+1][i]){
                    check=false;
                    break;
                }
            }
            if (check==true){
                ans.push_back(strs[0][i]);
            }
            else{
                break;
            }
        }
        return ans;
        
    }
};