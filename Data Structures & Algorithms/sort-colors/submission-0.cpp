class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0;
        int c1=0;
        int c2=0;
        int n=nums.size();//counting sort soln

        for (int i=0;i<n;i++){
            if (nums[i]==0){
                c0++;
            }
            else if (nums[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        for (int k=0;k<c0;k++){
            nums[k]=0;
        }
        for (int z=c0;z<c1+c0;z++){
            nums[z]=1;
        }
        for (int q=c1+c0;q<c2+c1+c0;q++){
            nums[q]=2;
        }
    }
};