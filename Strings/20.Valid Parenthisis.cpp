class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(!(st.empty())){
            if(st.top()=='('){
                if(s[i]==')'){
                    st.pop();
                    continue;
                }
            }
             if(st.top()=='{'){
                if(s[i]=='}'){
                    st.pop();
                    continue;
                }
            }
               if(st.top()=='['){
                if(s[i]==']'){
                    st.pop();
                    continue;
                }
            }
         }
            st.push(s[i]);
       
     }
    if(!(st.empty())){
        return false;
    }
    else{
        return true;
    }
    }
};
