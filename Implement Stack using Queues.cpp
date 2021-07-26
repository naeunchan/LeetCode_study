class MyStack {
private:
    queue<int> q;
    
public:
    /** Initialize your data structure here. */
    MyStack() {
        while(!q.empty()){
            q.pop();
        }
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        queue<int> tmpQ;
        int res = 0;
        
        while(q.size() != 1){
            tmpQ.push(q.front());
            q.pop();
        }
        
        res = q.front();
        q = tmpQ;
        
        return res;
    }
    
    /** Get the top element. */
    int top() {
        return q.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q.empty()){
            return true;
        }
        else{
            return false;
        }
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