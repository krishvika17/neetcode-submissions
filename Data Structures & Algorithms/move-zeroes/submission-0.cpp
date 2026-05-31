class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        while (r<n){
            if (nums[l]==0 && nums[r]!=0){
                swap(nums[r],nums[l]);
                l++;
            }
            else if ((nums[l] !=0 &&nums[r]!=0) ||(nums[l]!=0 && nums[r]==0)){
                l++;
            }
            r++;
        }
    }
};