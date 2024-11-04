class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int res;
        int temp[n];
        for(int i=0;i<n;i++ )
        {
            res=1;
            for(int j=0;j<n;j++)
            {
                if(j!=i){
                res=res*(nums[j]);
                temp[i]=res;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=temp[i];
        }

        return nums;
        return {};
    }
};
