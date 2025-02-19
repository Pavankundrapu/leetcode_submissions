class MinStack {
public:

    stack<long> st;    
    long mini = LONG_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
       if(st.empty())
       {
          mini = val;
          st.push(val);
       }
       else
       {
           if(val < mini)
           {
              st.push(2L*val-mini);
              mini = val;
           }
           else
           {
              st.push(val);
           }
       }
        
    }
    
    void pop() {
        if(mini > st.top())
        {
            mini = 2*mini-st.top();
        }
        st.pop();
    }
    
    int top() {
        if(mini > st.top())
        {
            return mini;
        }
        else
        {
            return st.top();
        }
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