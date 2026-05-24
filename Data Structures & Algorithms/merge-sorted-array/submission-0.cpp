class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j=m;j<m+n;j++){
            nums1[j]=nums2[j-m];
        }
        sort(nums1.begin(),nums1.end());
    }
};