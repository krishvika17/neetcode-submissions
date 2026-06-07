class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int area=0;
        int maxarea=0;
        int l=0;
        int r=n-1;//max width containers se start

        while (l<r){
            if (heights[r]>heights[l]){
                area=heights[l]*(r-l);
                l++;
            }
            else {
                area=heights[r]*(r-l);
                r--;
            }
            maxarea=max(area,maxarea);
        }
        return maxarea;

    }
};
