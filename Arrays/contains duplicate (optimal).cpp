class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;

        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            if(mpp.find(a)!=mpp.end())
            {
                return true;
                break;
            }
           
         mpp[a]=i;
        }
        return false;
    }
};
