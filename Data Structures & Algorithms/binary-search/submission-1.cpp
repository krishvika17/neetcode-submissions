class Solution {
public:
    int search(vector<int>& nums, int target) {

        auto it = lower_bound(nums.begin(), nums.end(), target);//nums-vector

        if (it != nums.end() && *it == target) {//it is iterator /pointer to the position where element >=target(first element using lower bound function)
            return it - nums.begin();//convert to index
        }
        return -1;
    }
};
//for upper bound: *(it-1)==target && it !=nums.begin()
//                  return it-1-nums.begin()