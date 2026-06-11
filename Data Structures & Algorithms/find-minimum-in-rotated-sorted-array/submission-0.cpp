class Solution {
public:
    int findMin(vector<int> &nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mini=INT_MAX;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[low] <= nums[high]) {
                mini = min(mini, nums[low]);
                break;//technically entire sorted array rotated n times + unique elements guaranteed
            }
            // Left half sorted
            if (nums[low] <= nums[mid]) {
               mini=min(nums[low],mini);
               low=mid+1;
            }
            // Right half sorted
            else {
                mini=min(nums[mid],mini);
                high=mid-1;
            }
        }

        return mini;
    
    }
};

       