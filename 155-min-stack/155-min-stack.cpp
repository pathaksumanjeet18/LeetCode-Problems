class MinStack {
public:
    stack<int> s1;int mini = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        s1.push(val);
        mini = min(val,mini);
    }
    
    void pop() {
        if(s1.top()==mini){
            s1.pop();
            mini = INT_MAX;
            stack<int> s2;
            while(!s1.empty()){
                mini = min(mini,s1.top());
                s2.push(s1.top());
                s1.pop();
            }
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        else{
            s1.pop();
        }
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
         
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */