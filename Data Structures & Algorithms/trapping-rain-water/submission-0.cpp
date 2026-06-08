class Solution {
public:
    vector<int> prefixmap(vector<int>& height, int n){
        vector<int>leftmaxarr(n);
        leftmaxarr[0]=height[0];
        for (int k=1;k<n;k++){
            leftmaxarr[k]=max(height[k],leftmaxarr[k-1]);
        }
        return leftmaxarr;
    }

    vector<int> suffixmap(vector<int>& height, int n){
        vector<int>rightmaxarr(n);
        rightmaxarr[n-1]=height[n-1];
        for (int j=n-2;j>=0;j--){
            rightmaxarr[j]=max(height[j],rightmaxarr[j+1]);
        }
        return rightmaxarr;
    }

    int trap(vector<int>& height) {
        int total=0;
        int n=height.size();
        vector<int>leftmax=prefixmap(height,n);
        vector<int>rightmax=suffixmap(height,n);
        for (int i=0;i<n;i++){
            total+=min(leftmax[i],rightmax[i])-height[i];
        }
        return total;
    }
};
