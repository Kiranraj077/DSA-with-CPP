class MyStack {
public:
    queue<int> que;
    MyStack() {
    }
    
    void push(int x) {
        que.push(x);
        for(int i=0;i<que.size()-1;i++){
            que.push(que.front());
            que.pop();
        }
    }
    
    int pop() {
     int a=que.front();
     que.pop();
     return a;
    }
    
    int top() {
        int tp=que.front();
        return tp;
    }
    
    bool empty() {
        if(que.size()==0){
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
