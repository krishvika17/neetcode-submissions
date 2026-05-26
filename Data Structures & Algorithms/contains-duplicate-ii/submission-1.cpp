class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int right=1;
        if (k==0){
            return false;
        }
        while (right<n){
            int left=max(0,right-k);
            while((right-left)<=k && left<right){
                if(nums[left]==nums[right]){
                    return true;
                }
                else{
                    left++;
                }
            }
            right++;
        }
        
        return false;
    }
};