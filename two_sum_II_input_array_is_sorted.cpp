class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        if(numbers.empty()) return res;
        int low=0,high=numbers.size()-1;
        while(low<high){
            int sum=numbers[low]+numbers[high];
            if(sum==target){res.push_back(low+1);res.push_back(high+1); return res;}
            else if(sum <target) low++;
            else high--;
        }
        return res;
    }
};
