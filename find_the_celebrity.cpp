// Forward declaration of the knows API.
bool knows(int a, int b);

class Solution {
public:
    int findCelebrity(int n) {
        int candidates=0;
        for(int i=1;i<n;++i){
          if(knows(candidates,i))candidates=i;
        } 
        for(int j=0;j<n;++j){
            if(j!=candidates && (knows(candidates,j)||!knows(j,candidates))) return -1;
        }
        return candidates;
    }
};
