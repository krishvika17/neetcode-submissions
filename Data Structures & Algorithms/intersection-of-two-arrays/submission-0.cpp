class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size();
       int n2=nums2.size();

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int l1=0;
        int l2=0;
        vector<int>int_arr;

        while(l1<n1 && l2<n2){
            if (nums1[l1]==nums2[l2]){
                if (int_arr.empty()||int_arr.back()!=nums1[l1]){
                    int_arr.push_back(nums1[l1]);
                }
                l1++;
                l2++;
            }
            else if (nums1[l1]>nums2[l2]){
                l2++;
            }
            else{
                l1++;
            }
        }
        return int_arr;//tc=o(n1+n2) , sc=o(1), o(min(n1,n2))-return ans not used in my algo
        }
};