class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2,-1);
        if(nums.empty()) return result;
        // first binary search to find the first occurence of the target
        int start = 0;
        int end = nums.size()- 1;
        
        while (start + 1 < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                end = mid;
            } else if (nums[mid] > target) {
                end = mid;
            } else {
                start = mid;
            }            
        }
        
        if (nums[end] == target) {
            result[0] = end;
        }
        if (nums[start] == target) {
            result[0] = start;
        }
        
        // second binary search to find the last occurence of the target
        start = 0;
        end = nums.size() - 1;
        
        while (start + 1 < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                start = mid;
            } else if (nums[mid] < target) {
                start = mid;
            } else {
                end = mid;
            }
        }
        
        if (nums[start] == target) {
            result[1] = start; 
        }
        if (nums[end] == target) {
            result[1] = end;
        }
        
        return result;
    }
        
};


