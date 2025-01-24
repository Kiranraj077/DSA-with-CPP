class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Map to store the frequency of each element in the vector
        map<int, int> mpp;

        // Set to store the majority elements (appearing more than n/3 times)
        set<int> sett;
        
        // Get the size of the input vector
        int n = nums.size();
        
        // Loop through each element in the vector
        for (int i = 0; i < n; i++) {
            // Get the current element
            int a = nums[i];
            
            // Increment the frequency count of the current element
            mpp[a]++;
            
            // If an element's frequency is more than n/3, insert it into the set
            if (mpp[a] > n / 3) {
                sett.insert(a);
            }
        }
        
        // Convert the set to a vector and return it
        vector<int> res(sett.begin(), sett.end());
        return res;
    }
};
