class MyQueue {
public:
    MyQueue() {
    }
    stack<int>s1,s2;
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(s1.size()>0){
            int ele=s1.top();
            s2.push(ele);
            s1.pop();
        }
        int ans=s2.top();
        s2.pop();
        while(s2.size()>0){
            int ele=s2.top();
            s1.push(ele);
            s2.pop();
        }
        return ans;
    }
    
    int peek() {
        while(s1.size()>0){
            int ele=s1.top();
            s2.push(ele);
            s1.pop();
        }
        int ans=s2.top();
         while(s2.size()>0){
             int ele=s2.top();
            s1.push(ele);
            s2.pop();
        }
        return ans;
    }
    
    bool empty() {
        if(s2.size()>0){
            return false;
        }
        if(s1.size()>0){
            return false;
        }
        return true;
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
