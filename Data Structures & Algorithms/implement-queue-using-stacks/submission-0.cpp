class MyQueue {
public:
    stack<int> s,s1;

    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {

        if(!s1.empty())
        {
            int x=s1.top();
            s1.pop();
            return x;
        }
        else
        {
            while(!s.empty())
            {
                s1.push(s.top());
                s.pop();
            }
            int x=s1.top();
            s1.pop();
            return x;
        }
    }
    
    int peek() {
        if(!s1.empty())
        {
            int x=s1.top();
            
            return x;
        }
        else
        {
            while(!s.empty())
            {
                s1.push(s.top());
                s.pop();
            }
            int x=s1.top();
          
            return x;
        }
    }
    
    bool empty() {

        return s.empty()&&s1.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */