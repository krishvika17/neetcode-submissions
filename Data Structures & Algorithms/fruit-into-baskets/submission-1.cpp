class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int l=0;
        int r=0;
        int count=0;
        int max_count=0;

        unordered_map <int,int> freq_mp;

        while (r<n){
            freq_mp[fruits[r]]++;
            if( freq_mp.size()>2){
                freq_mp[fruits[l]]--;
                if (freq_mp[fruits[l]]==0){
                    freq_mp.erase(fruits[l]);
                }
                l++;
            }
            count=r-l+1;
            max_count=max(count,max_count);
            r++;
        }
        return max_count;
    }
};