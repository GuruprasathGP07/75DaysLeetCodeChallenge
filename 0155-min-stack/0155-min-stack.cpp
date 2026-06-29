class MinStack {
public:
    stack<int>st;
    stack<int>minst;
    MinStack() {

    }
    void push(int val) {
        st.push(val);
        if(minst.empty() || minst.top()>=val){
            minst.push(val);
        }
    }
    void pop() {
        int t=st.top();
        st.pop();
        if(!minst.empty() && minst.top()==t){
            minst.pop();
        }   
    }
    int top() {
        return st.top();   
    }
    int getMin() {
        return minst.top();     
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */