class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int low =0;
        int n=nums.size();
        int high=n-1;
        qs(nums,low,high);//fxn called first time
        return nums;//sorted in ascending order
    }

    void qs(vector<int>& nums,int low,int high){
        if (low>=high){
            return;//base case
        }
        int partition_index=prt_idx(nums,low,high);//another fxn to find partition index
        qs(nums,low,partition_index-1);//sort left subarray 
        qs(nums,partition_index+1,high);//sort right subarray
    }

    int prt_idx(vector<int>& nums,int low,int high){
        int pivot=nums[low];//assuming 1st element in all subarrays to be pivot element
        int left=low;
        int right=high;
        while (left<right){
            while(left<=high && nums[left]<=pivot){//in case element equal to pivot keep that on left only of pivot
                left++;
            }
            while (right>=low && nums[right]>pivot){
                right--;
            }
            if (left<right){
                swap(nums[left],nums[right]);
            }
        }
        swap(nums[low],nums[right]);//final swapping for correct place of pivot 
        int prt_idx=right;//store correct place of pivot index- partition index 
        return prt_idx;
    }
};