class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int low=0;
        int high=num;//range from 0-num
        while(low<=high){
            long long mid=(low+high)/2;
            if (mid*mid>num){
                high=mid-1;
            }
            else if (mid*mid==num){
                return true;//exact match
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};
   