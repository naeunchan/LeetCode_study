class MinStack {
public:
    /** initialize your data structure here. */
    int data[100000];
    int index;
    
    MinStack() {
        index = 0;
    }
    
    void push(int val) {
        data[index++] = val;
    }
    
    void pop() {
        index--;
    }
    
    int top() {
        return data[index - 1];
    }
    
    int getMin() {
        int res = INT_MAX;
        
        for(int i = 0; i < index; i++){
            res = min(res, data[i]);
        }
        
        return res;
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