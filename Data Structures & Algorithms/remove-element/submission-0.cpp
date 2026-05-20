#include <iostream>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        int k=0;
        for (int i=0;i<n;i++){
            if (nums[i]==val){
                k=k+1;
            }
        }
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        int final_size=nums.size();
        for (int j=0;j<final_size;j++){
            cout<<nums[j];
        }
        return n-k;
        
    }
};