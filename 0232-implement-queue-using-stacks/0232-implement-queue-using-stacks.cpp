class MyQueue {
    stack<int> s1,s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        
        s1.push(x);
        
    }
    
    int pop() {
        
        while(!s1.empty())
        {
            int t=s1.top();
            s1.pop();
            s2.push(t);
        }
        int todelete=s2.top();
        s2.pop();
        while(!s2.empty())
        {
            int t=s2.top();
            s2.pop();
            s1.push(t);
        }
        
        return todelete;
        
    }
    
    int peek() {
        while(!s1.empty())
        {
            int t=s1.top();
            s1.pop();
            s2.push(t);
        }
        int peek=s2.top();
        while(!s2.empty())
        {
            int t=s2.top();
            s2.pop();
            s1.push(t);
        }
        
        
        return peek;
        
    }
    
    bool empty() {
        if(s1.empty())
            return true;
        else
            return false;
        
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