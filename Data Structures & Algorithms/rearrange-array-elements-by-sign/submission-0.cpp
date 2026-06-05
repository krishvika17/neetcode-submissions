class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector <int>ans(n);//o(n)-sc
        int pos=0;
        int neg=1;
        
        int i=0;
        while (i<n){//single pass otherwise o(2n)=tc if u make two arrays of pos and neg numbers and then append in final nums 
            if (nums[i]>0){
                ans[pos]=nums[i];
                pos+=2;
            }
            else{
                ans[neg]=nums[i];
                neg+=2;
            }
            i++;
        }
        
        return ans;
    }
};