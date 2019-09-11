class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(n+m);
        int p1=m-1;
        int p2=n-1;
        int temp=m+n-1;
        while(p1+1!=0 && p2+1!=0){
            if(nums1[p1]>nums2[p2]){
                nums1[temp--]=nums1[p1--];
            }else{
                nums1[temp--]=nums2[p2--];
            }
        }
        while(p2+1!=0){
            nums1[temp--]=nums2[p2--];
        }
    }
};
