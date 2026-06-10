class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        
        vector<int>ans={-1,-1};
        while (l<nums.size() && r>=0){//linear search
            if (ans[0]==-1 && nums[l]==target){
                ans[0]=l;
                
            }
            if (ans[1]==-1 && nums[r]==target){
                ans[1]=r;
            }
            if(ans[0]!=-1 && ans[1]!=-1){
                break;//small optimisation
            }
            l++;
            r--;
        }
        return ans;
    }
};