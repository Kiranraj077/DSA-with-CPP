class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> maxheap; 
        
        for (int i = 0; i < heights.size() - 1; i++) {
            int diff = heights[i + 1] - heights[i];

            if (diff > 0) {  
                maxheap.push(diff);  
                bricks -= diff;      
                
               
                if (bricks < 0) {
                    if (ladders > 0) {
                        bricks += maxheap.top(); 
                        maxheap.pop();           
                        ladders--;             
                    } else {
                        return i; 
                    }
                }
            }
        }
        return heights.size() - 1; 
    }
};
