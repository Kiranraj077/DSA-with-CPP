class MyQueue {
public:
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> temp;
        vector<int> vec;
        temp.push(x);
        int n=st.size();
        for(int i=0;i<n;i++){
            vec.push_back(st.top());
            st.pop();
        }
        for(int i=(vec.size()-1);i>=0;i--){
           temp.push(vec[i]);
        }
        st=temp;
    }
    
    int pop() {
        int a=st.top();
        st.pop();
        return a;
    }
    
    int peek() {
        int a=st.top();
        return a;
    }
    
    bool empty() {
        if(st.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
};
