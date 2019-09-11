class Solution {
public:
    bool isPowerOfFour(int num) {
        return num>0 && log10(num)/log10(4)-int(log10(num)/log10(4))==0;
    }
};
