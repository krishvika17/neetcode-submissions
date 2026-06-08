class Solution {
   public:
    int trap(vector<int>& height) {
        int total = 0;
        int n = height.size();
        int lmax=0;
        int rmax=0;
        
        int l=0;
        int r=n-1;
        while (l<r){//o(n)-tc, sc=o(1)
            lmax=max(height[l],lmax);
            rmax=max(height[r],rmax);
            if(lmax>rmax){
                total+=rmax-height[r];//we care only about the small length since that woulb be minimun of lmax and rmax
                r--;
            }
            else{
                total+=lmax-height[l];
                l++;
            }
        }
        return total;
    }
};
