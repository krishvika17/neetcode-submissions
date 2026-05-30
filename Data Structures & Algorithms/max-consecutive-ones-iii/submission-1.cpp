class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>freq_mp;

        int l=0;
        int r=0;
        int max_len=0;

        while (r<n){
            freq_mp[nums[r]]++;
            if (freq_mp[0]>k){
                freq_mp[nums[l]]--;
                l++; 
            }
            max_len=max(max_len,r-l+1);
            r++;  
        }

        return max_len;
    }
};