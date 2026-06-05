class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        vector<vector<int>>ans;

        for (int i=0;i<n;i++){
            if (i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1;
            int k=n-1;
            if (nums[i]>0){
            break;
            }
            while(j<k){
                if (nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else if (nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else{
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);                // if (find(ans.begin(),ans.end(),temp)==ans.end()){
                                                        //     ans.push_back(temp);
                                                       // }->o(n2*t) where t is no of unique triplets
                    j++;
                    k--;//move pointers once triplets found
                    while(j<k && nums[j-1]==nums[j]){
                        j++;// useful when duplicates exist so move j and k accordingly but do keep a boundary check
                    }
                    while(k>j+1 && nums[k-1]==nums[k]){
                        k--;
                    }
                }
            }
            
        }

        return ans;
    }
};
