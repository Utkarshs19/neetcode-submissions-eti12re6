class FreqStack {
public:
    priority_queue<vector<int>> pq;
    map<int,int> m;
    int i=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        m[val]++;
        pq.push({m[val],i++,val});
    }
    
    int pop() {
        auto top=pq.top();
        pq.pop();
        int val=top[2];
        m[val]--;
        return val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */