class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int count=0;
        int max_count=0;
        while (r<n){
            if (nums[l]==nums[r] && nums[l]==1){
                count+=1;
            }
            else {
                l=r+1;
                count=0;
            }
            max_count=max(max_count,count);
            r++;
        
        }
        return max_count;
    }
};