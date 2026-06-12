class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();

        vector<int> sortedArr = nums;
        sort(sortedArr.begin(), sortedArr.end());//o(nlogn)

        vector<int> doubled = sortedArr;
        doubled.insert(doubled.end(), sortedArr.begin(), sortedArr.end());//o(n)-copies n elements

        // Search nums as a contiguous subarray in doubled
        for (int start = 0; start < n; start++) {//o(n2)
            bool found = true;

            for (int j = 0; j < n; j++) {
                if (doubled[start + j] != nums[j]) {
                    found = false;
                    break;
                }
            }

            if (found){
                return true;
            }
        }

        return false;
    }
};//sc=o(n+2n)=o(3n)(sorted+doubled array)