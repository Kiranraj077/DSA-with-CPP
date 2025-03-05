class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l,r;
        int sum=0;
        int n=numbers.size();
        vector<int> res;

        l=0;
        r=n-1;
        while(l<=r){
           sum= numbers[l]+numbers[r];
            if(sum==target){
               res.push_back(l+1);
               res.push_back(r+1);
               break;
            }
            else if(sum<target){
                l++;
            }
            else if(sum>target){
                r--;
            }
        }
        return res;
    }
};
