class Solution {
public:
    bool check(vector<int>& nums) {//optimal soln
        int n = nums.size();
        int count=0;
 
        for (int i=0;i<n;i++){//o(n)
            if (nums[i]> nums[(i+1)%n]){//circular indexing otherwise you would have to push_back starting el in last of array to compare -extra relocation memory
                count++;
            }
        }
        if(count>1){
            return false;//sign drops only once if array is rotated and sorted 
        }
        return true;
        
    }
};