class Solution {
public:
    int trap(vector<int>& height) {
        int hmax=0;
        for(int i=0;i<height.size();++i) hmax=(height[i]>=height[hmax])? i:hmax;
        int sum=0;
        int left=0,right=0;
        for(int i=0;i<=hmax-1;++i){
            if(height[i]>left)left=height[i];
            sum+=(left-height[i]);
        }
        for(int j=height.size()-1;j>=hmax+1;--j){
            if(height[j]>right) right=height[j];
            sum+=(right-height[j]);
        }
        return sum;
    }
};
