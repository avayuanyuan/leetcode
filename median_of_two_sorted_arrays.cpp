class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size();
        if(n==0) return (m%2==1)? nums2[m/2]:(nums2[m/2]+nums2[m/2-1])/2.0;
        if(m==0) return (n%2==1)? nums1[n/2]:(nums1[n/2]+nums1[n/2-1])/2.0;
        int q=n+m;
        if(q%2==1) return findKth(nums1,nums2,0,0,q/2+1);
        else return (findKth(nums1,nums2,0,0,q/2)+findKth(nums1,nums2,0,0,q/2+1))/2.0;
    }
    
    double findKth(vector<int>& nums1, vector<int>& nums2, int startA, int startB, int k){
        if(startA>=nums1.size()) return nums2[startB+k-1];
        if(startB>=nums2.size()) return nums1[startA+k-1];
        if(k==1) return min(nums1[startA],nums2[startB]);
        int idA=startA+k/2-1;
        int idB=startB+k/2-1;
        int A=(idA>=nums1.size())?INT_MAX:nums1[idA];
        int B=(idB>=nums2.size())?INT_MAX:nums2[idB];
        if(A<B){return findKth(nums1,nums2,startA+k/2,startB,k-k/2);}
        else{return findKth(nums1,nums2,startA, startB+k/2,k-k/2);}
    }
};
