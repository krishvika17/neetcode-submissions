class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();//brute force soln
        k=k%n;//after n rotations we get same array again
        if (k==0){
            return;
        }
        vector <int>temp;
        for (int i=n-k;i<n;i++){
            temp.push_back(nums[i]);//o(k)
        }
        for (int j=n-1-k;j>=0;j--){
            nums[j+k]=nums[j];
        }//o(n-k)
        for (int q=0;q<k;q++){
            nums[q]=temp[q];
        }

    }
};