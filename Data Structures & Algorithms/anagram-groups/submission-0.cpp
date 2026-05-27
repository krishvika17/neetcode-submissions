class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        int m=strs.size();

        for(int i=0; i<m; i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);//mp[temp]=array of string vectors basically sorted keys and original strings as values in form of array
        }

        vector<vector<string>> final;

        for(auto it : mp){
            final.push_back(it.second);
        }

        return final;
    }
};