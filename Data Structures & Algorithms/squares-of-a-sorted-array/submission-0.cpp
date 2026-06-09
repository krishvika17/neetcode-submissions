class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int>sq;//o(n) for returning ans
        int pos=nums.size();
        for (int i=0;i<nums.size();i++){
            if (nums[i]>=0){
                pos=i;
                break;
            }
        }
        int l=pos-1;//o(n):tc
        int r=pos;
        while(l>=0 && r<nums.size()){
            if (abs(nums[l])<nums[r]){
                sq.push_back(pow(nums[l],2));
                l--;
            }
            else if(abs(nums[l])>nums[r]){
                sq.push_back(pow(nums[r],2));
                r++;
            }
            else{
                sq.push_back(pow(nums[l],2));
                sq.push_back(pow(nums[r],2));
                l--;
                r++;
            }
        }
        while(l>=0){
            sq.push_back(pow(nums[l],2));
            l--;
        }
        while (r<nums.size()){
            sq.push_back(pow(nums[r],2));
            r++;
        }
        return sq;
    }
};