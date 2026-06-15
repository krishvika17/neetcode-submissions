class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxi = INT_MIN ;
        int sum=0;
        for (int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);//o(n)- say x is your max el
        }
        int low=1;
        int high=maxi;
        if (h==n){
            return maxi;
        }
        while (low<=high){//o((log 2 x)*n)
            int mid=low+(high-low)/2;
            long long sum=0;//check constraints
            for (int j=0;j<n;j++){
                if (piles[j]%mid!=0){//o(n)
                    sum=sum+(piles[j]/mid)+1;//sum=total hours taken if speed =mid
                }
                else{
                    sum+=piles[j]/mid;
                }
            }
            if (sum>h){
                low=mid+1;
            }
            else{
                high=mid-1;
            } 
        }
        return low;//low and high end on opposite polarities
    }
};
