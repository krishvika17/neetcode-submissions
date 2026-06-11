class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
                vector <int>ans={-1,-1};
                int first_occ=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
                if (first_occ!=nums.size() && nums[first_occ]==target){
                        ans[0]=first_occ;
                        ans[1]=first_occ;//first put condition on index and then access vector thru index (to get rid of out of bounds edge cases)
                }                                
                int last_occ=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
                if (last_occ-1>=0 && nums[last_occ-1]==target){
                        ans[1]=last_occ-1;
                }    
                return ans;
        }
};
                