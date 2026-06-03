class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>elements_count;
        for (int i=0;i<n;i++){
            elements_count[nums[i]]++;
            if (elements_count[nums[i]]>n/2){
                return nums[i];
            }
        }
        return -1;

    }
};