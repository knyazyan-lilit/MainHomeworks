class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;
public:
    /** Push element x to the back of queue. */
    void push(int x) {
        if(s2.empty()){
            s1.push(x);
        }
        else{
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            s1.push(x);
        }
    }
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int tmp;
        if(s1.empty()){
           tmp=s2.top();
            s2.pop();
        }
        else{
             while(!s1.empty()){
                 s2.push(s1.top());
                 s1.pop();
             }
            tmp=s2.top();
            s2.pop();
        }
        return tmp;
    }
    
    /** Get the front element. */
    int peek() {
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
         return s2.top();
    }
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty() && s2.empty();
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
