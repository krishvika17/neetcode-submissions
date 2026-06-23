class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        if (n==1){
            return weights[0];
        }

        int sum=0;
        int maxi=INT_MIN;
        for (int i=0;i<n;i++){
            maxi=max(maxi,weights[i]);
            sum+=weights[i];
        }

        int low=maxi;
        int high=sum;
        while (low<=high){
            int mid=low+(high-low)/2;
            int load=0;
            int count=1;//even if all packages in 1 ship 1 day reqd
            for (int z=0;z<n;z++){
                if (load+weights[z]<=mid){//capacity of that very day tested whether next load can be placed
                    load+=weights[z];//update load (creating windows of per day packages allowed)
                    continue;
                }
                else{//next day load 
                    count+=1;
                    load=weights[z];
                }
            }
            if (count<=days){//return least capacity of ship to deliver given amount(sum) of packages in D days
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};