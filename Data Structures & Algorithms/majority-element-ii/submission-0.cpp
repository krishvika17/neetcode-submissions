class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;//o(2)=o(1)-SC
        
        int count1=0;
        int count2=0;
        int el1=INT_MIN;
        int el2=INT_MIN;

        for (int i=0;i<n;i++){//o(n)
            if (count1==0 && nums[i]!=el2){//el1 and el2 should be unique 
                el1=nums[i];
                count1=1;
            }
            else if (count2==0 && nums[i]!=el1 ){
                el2=nums[i];
                count2=1;
            }
            else if(el1==nums[i] ){
                count1++;
            }
            else if(el2==nums[i] ){
                count2++;
            }
            else {
                count1--;
                count2--;
            }
        }

        int ct1=0;
        int ct2=0;
        for (int j=0;j<n;j++){//o(n)
            if (nums[j]==el1){
                ct1++;
            }
            if (nums[j]==el2){
                ct2++;
            }

        }
        
        if (ct1>n/3){
            temp.push_back(el1);
        }
        if (ct2>n/3){
            temp.push_back(el2);
        }
        return temp;
    }
};