class Solution {
public:
    int arrangeCoins(int n) {
        int low=0;
        int high=n;

        while (low<=high){
            long long mid=low+(high-low)/2;
            if (mid*(mid+1)/2<=n){//mid in multiplication
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};