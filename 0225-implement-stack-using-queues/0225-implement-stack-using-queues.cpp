class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    
    MyStack() {
        
    }
    
    void push(int x) 
    {    
        if(q1.empty())
        {
            q1.push(x);
            return;
            
        }
        q2.push(x);
        while(!q1.empty())
        {
            int transfer=q1.front();
            q2.push(transfer);
            q1.pop();
                
        }
        while(!q2.empty())
        {
            int move=q2.front();
            q1.push(move);
            q2.pop();
        }
        
        
    }
    
    int pop() 
    {
        int todelete=q1.front();
        q1.pop();
        return todelete;
        
    }
    
    int top() {
        int ontop=q1.front();
        return ontop;
        
    }
    
    bool empty() {
        if(q1.empty())
        {
            return true;
        }
        else
            return false;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */