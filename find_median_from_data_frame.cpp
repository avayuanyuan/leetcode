class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {
        
    }
    
    void addNum(int num) {
      if(l.empty()||num<=l.top()) l.push(num);
        else r.push(num);
        
        if(l.size()<r.size()){l.push(r.top());r.pop();}
        else if(l.size()-r.size()==2){r.push(l.top());l.pop();}
    }
    
    double findMedian() {
        if(l.size()>r.size()) return l.top();
        else return(l.top()+r.top())/2.0;
    }
private:
    priority_queue<int,vector<int>,less<int>> l;
    priority_queue<int,vector<int>,greater<int>> r;
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
