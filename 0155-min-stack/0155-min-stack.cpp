class MinStack {
public:
    stack<int>arr;
    stack<int>temp;
    MinStack() {
        
    }
    
    void push(int val) {
        arr.push(val);
        if(temp.empty()) temp.push(val);
        else temp.push(min(val,temp.top()));
    }
    
    void pop() {
        arr.pop();
        temp.pop();
    }
    
    int top() {
        int n=arr.top();
        return n;
    }
    
    int getMin() {
        return temp.top();
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