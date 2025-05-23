class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int posindex=0,negindex=1;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                ans[posindex]=nums[i];
                posindex+=2;
            }
            else{
                ans[negindex]=nums[i];
                negindex+=2;
            }
        }
        return ans;
    }
};
