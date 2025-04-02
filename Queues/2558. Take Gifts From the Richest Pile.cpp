class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> maxheap;
        int n=gifts.size();
        long long sum=0;
        int top=0;
        for(int i=0;i<n;i++){
            maxheap.push(gifts[i]);
        }
        for(int i=0;i<k;i++){
          top=maxheap.top();
          maxheap.pop();
          maxheap.push(floor(sqrt(top)));
        }
        while(!maxheap.empty()){
            sum=sum+maxheap.top();
            maxheap.pop();
        }
        return sum;
    }
};
