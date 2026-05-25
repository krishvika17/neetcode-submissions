class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
   
    unordered_map<int,int> prefix_sum;
    int n=nums.size();
    int sum = 0;
    int count = 0;

    // important for subarrays starting from index 0
    prefix_sum[0] = 1;

    for(int i=0; i<n; i++){

        sum += nums[i];

        int remaining = sum - k;

        // if remaining exists
        if(prefix_sum.find(remaining) != prefix_sum.end()){

            count += prefix_sum[remaining];
        }

        // store/update current prefix sum
        prefix_sum[sum]++;
    }
    return count;
    }
};