class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums2.size();
        int l=nums1.size();
        vector<int> ans(l);
        unordered_map<int,int> mpp;
        stack<int> st;
        for(int i=n-1;i>=0;i--){
              while((!st.empty())&&(st.top()<nums2[i])){
                    st.pop();
              }
             if((!st.empty())&&(st.top()>=nums2[i])){
                mpp[nums2[i]]=st.top();
                st.push(nums2[i]);
             }
              if(st.empty()){
                mpp[nums2[i]]=-1;
                st.push(nums2[i]);
             }           
        }
        for(int i=0;i<l;i++){
            ans[i]=mpp[nums1[i]];
        }
     
        return ans;
    }
};
