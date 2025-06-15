class Solution {
public:
    int beautySum(string s) {
       int n=s.size();
       int res=0;
        
       for(int i=0;i<n;i++){
            unordered_map<char,int> mpp;
            for(int j=i;j<n;j++){
                  mpp[s[j]]++;
      
             int max_freq=INT_MIN;
             int min_freq=INT_MAX;
             int sum=0;

              for(auto it=mpp.begin();it!=mpp.end();it++){
                if(it->second>max_freq){
                max_freq=it->second;
              }
               if(it->second<min_freq){
                min_freq=it->second;
               }
              }
              sum=max_freq-min_freq;
               res+=sum;
            }
         }
       
       return res;
    }
};
