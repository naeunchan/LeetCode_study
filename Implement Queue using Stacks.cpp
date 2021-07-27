class MyQueue {
private:
    stack<int> stk;
    int top = 0;
public:
    /** Initialize your data structure here. */
    MyQueue() {
        while(!stk.empty()){
            stk.pop();
        }
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(stk.empty()){
            top = x;
        }
        stk.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        stack<int> tmp;
        int result = 0;
        
        while(stk.size() != 1){
            tmp.push(stk.top());
            stk.pop();
        }
        
        result = stk.top();
        stk.pop();
        
        if(!tmp.empty()){
            top = tmp.top();
        }
        
        while(!tmp.empty()){
            stk.push(tmp.top());
            tmp.pop();
        }
        
        return result;
    }
    
    /** Get the front element. */
    int peek() {
        return top;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(stk.empty()){
            return true;
        }
        else{
            return false;
        }
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