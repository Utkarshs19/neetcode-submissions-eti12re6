class FreqStack {
public:
    unordered_map<int,int> m;
    unordered_map<int,vector<int>> freq;
    int maxi=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        m[val]++;
        maxi=max(maxi,m[val]);
        freq[m[val]].push_back(val);
    }
    
    int pop() {
        int ans=freq[maxi].back();
        freq[maxi].pop_back();
        m[ans]--;
        if(freq[maxi].empty())
        maxi--;

        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */