class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;//range from 0-n
        while(low<=high){
            long long mid=(low+high)/2;
            if (mid*mid>x){
                high=mid-1;
            }
            else if (mid*mid==x){
                return mid;//exact match
            }
            else{
                low=mid+1;
            }
        }
        return high;//low points to first integer whose square crosses x while high points to the largest integer whose sq is less than x 
    }
};