class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> res;
        int l,r;
        int sum=0;
        map<int,int> mpp;
       for(int i=0;i<n;i++){
         mpp[nums[i]]=i;
       }
      for(int i=0;i<n;i++){
         int comp=target-nums[i];
         if(mpp.find(comp)!=mpp.end()){
        if(i!=mpp[comp]){
           res.push_back(i);
           res.push_back(mpp[comp]);
           break;
        }
         }
         
      }
       return res;
      }
      
};
