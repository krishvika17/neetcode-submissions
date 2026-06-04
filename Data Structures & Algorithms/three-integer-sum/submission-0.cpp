class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>st;//to maintain uniqueness of triplets

        for (int i=0;i<n;i++){//o(n2)
            unordered_set <int> mp;//o(n)=sc
            for (int j=i+1;j<n;j++){
                if (mp.find(-(nums[j]+nums[i]))!=mp.end()){
                    vector<int>temp={nums[i],nums[j],-(nums[i]+nums[j])};
                    sort(temp.begin(),temp.end());//o(3log3)=o(1)
                    st.insert(temp);//o(log(no of triplets)) both tc and sc
                }
                mp.insert(nums[j]);
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());//copy elements from set to vector
        return ans;
    }
};
