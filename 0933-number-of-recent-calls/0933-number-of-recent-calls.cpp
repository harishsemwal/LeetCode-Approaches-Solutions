class RecentCounter {
public:
    queue<int>counter;
    RecentCounter() {
    }
    
    int ping(int t) {
        counter.push(t);
        int count=0;
        while( t-counter.front()>3000){
            counter.pop();++count;
        }
        return counter.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */