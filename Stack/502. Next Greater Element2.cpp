class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=(2*n-1);i>=0;i--){
               
              while((!st.empty())&&(st.top()<=nums[i%n])){
                    st.pop();
              }
               if((!st.empty())&&(st.top()>nums[i%n])){
                if(i<n){
                ans[i]=st.top();
                }
             }      
        
              if(st.empty()){
                ans[i%n]=-1;
             }
             st.push(nums[i%n]);
        }
        return ans;
    }
};
