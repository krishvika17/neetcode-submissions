class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();

        if (n==1){
            return 0;
        }
        int sum=0;
        for (int k=0;k<n;k++){
            sum+=nums[k];
        }
        
        int pivot=0;
        int lsum=0;
        while (pivot<n){
            sum-=nums[pivot];//sum of elements to the right of the pivot
            if (pivot!=0){
                lsum+=nums[pivot-1];//running sum instead of recalculation (tc=o(n2)->o(n))
            }
            if (lsum==sum){
                return pivot;
            }
            pivot++;
        }
        return -1;
        
    }
};