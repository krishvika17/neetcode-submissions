class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {//sprting problems pointers at oppt ends
        vector <int>ans;
        int n=numbers.size();

        int i=0;
        int j=n-1;
        while(i<j){//2 diff elements needed
            if(numbers[i]+numbers[j]>target){
                j--;
            }
            else if (numbers[i]+numbers[j]==target){
                ans.push_back(i+1);//1 based indexing
                ans.push_back(j+1);
                return ans;
            }
            else{
                i++;
            }
        }
    }
};