class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int num:nums1)
        {
            mpp[num]=1;
        }
        for(int num:nums2)
        {
            if(mpp.find(num)!=mpp.end())
            mpp[num]+=1;
        }
        for(auto &[num,count]:mpp)
        {
            if(count>1)
            ans.push_back(num);
        }
        return ans;
    }
};
