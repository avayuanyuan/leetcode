class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows==1){return s;}
        int period= 2*numRows-2;
        string convert="";
        int n=s.size();
        
        for(int i=0; i<numRows; ++i){
            for (int j=0; j+i<n;j+=period){
                convert+=s[i+j];
                if(i>0 && i<numRows-1 && j+period-i<n){
                    convert+=s[j+period-i];
                }
            }
        }
        
        return convert;
    }
};
