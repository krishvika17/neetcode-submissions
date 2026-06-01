class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int n=nums.size();
        int min_len=INT_MAX;//min length of array reqd so 2 while in sliding window not inner if
        int sum=0;

        while (r<n){
            sum+=nums[r];
            while (sum>=target){
                min_len=min(min_len,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        if (min_len==INT_MAX){
            return 0;
        }
        return min_len;
    }
};