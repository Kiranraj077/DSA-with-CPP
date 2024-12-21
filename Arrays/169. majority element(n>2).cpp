class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        
        map<int,int> mpp;
        int res=0;
        for(int i=0;i<n;i++)
        {
           int a=nums[i];
           mpp[a]++;
          if(mpp[a]>n/2)
          {
              return a;
          }
        }
          
        return -1;
    }
    
};
