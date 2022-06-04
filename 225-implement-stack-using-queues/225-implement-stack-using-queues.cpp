class MyStack {
public:
    queue<int>q1, q2;
    int topp;
    MyStack() {
        topp = 0;
    }
    
    void push(int x) {
        q1.push(x);
        topp = x;
    }
    
    int pop() {
      
        while(q1.size() > 1)
        {
            topp = q1.front();
            q1.pop();
            q2.push(topp);
        }
        int del = q1.front();
        q1.pop();
        
        queue<int>swap = q1;
        q1 = q2;
        q2 = swap;
        
        return del;
        
    }
    
    int top() {
        return topp;
    }
    
    bool empty() {
        return q1.empty();
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