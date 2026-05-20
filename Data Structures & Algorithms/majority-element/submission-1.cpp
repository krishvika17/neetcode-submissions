#include <iostream>
#include <set>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>elements_count;
        for (int i=0;i<n;i++ ){
            int count=0;
            for (int j=0;j<n;j++){
                if (nums[j]==nums[i]){
                    count+=1;
                }
            }
            elements_count[nums[i]]=count;//indexing properly with nums[i] not i
        }
            
        set<int>s(nums.begin(),nums.end());
        vector<int> v(s.begin(), s.end());
        int ss=v.size();
        int largest=0;
        int ans;
        for (int a=0;a<ss;a++){
            if (elements_count[v[a]]>largest){
                largest=elements_count[v[a]];
                ans=v[a];
            }
        }
        return ans;
    }
};