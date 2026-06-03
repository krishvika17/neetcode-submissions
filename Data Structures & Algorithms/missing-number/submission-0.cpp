class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int temp=-1;

        for (int i=0;i<n;i++){
            if (nums[i]!=i){
                temp=i;
                break;//here tc=o(nlogn) and sc=o(1)
            }
        }
        if (temp!=-1){
            return temp;
        }
        else{
            return n;
        }
        
    }
};
