class MyCalendarThree {
public:
    MyCalendarThree() {
        
    }
    map<int, int> mp;
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        
        int count = 0;
        int row_nums = 0;
        for(auto x: mp){
            count += x.second;
            row_nums = max(count, row_nums);
        }
        return row_nums;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */