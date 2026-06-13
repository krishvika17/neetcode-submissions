class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if (n==1){
            return 0;
        }
        else{
            if (nums[0]>nums[1]){
                return 0;
            }
            else if (nums[n-2]<nums[n-1]){
                return n-1;
            }
            else{
                int low=1;
                int high=n-2;
                while(low<=high){
                    int mid=low+(high-low)/2;
                    if (nums[mid]>nums[mid+1] && nums [mid]>nums[mid-1]){
                        return mid;
                    }
                    else if(nums[mid]<nums[mid+1]){
                        low=mid+1;
                    }
                    else{
                        high=mid-1;
                    }
                }
            }
        }
        return -1;
    }
};//in case of multiple peaks as well if i eliminate a search space with peaks then i am assured my leftover search space will have some peak