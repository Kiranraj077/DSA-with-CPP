class Solution {
public:
    // Function to calculate the maximum profit that can be achieved
    // from buying and selling a stock on different days.
    int maxProfit(vector<int>& prices) {
        // Initialize the minimum price to the first day's price
        int mini = prices[0];
        
        // Initialize maximum profit to 0
        int maxprofit = 0;

        // Variable to store the current profit (difference between current price and minimum price)
        int cost = 0;

        // Get the number of days in the price array
        int n = prices.size();

        // Iterate through the prices starting from the second day
        for (int i = 1; i < n; i++) {
            // Calculate the profit if the stock is sold on the current day
            cost = prices[i] - mini;

            // Update the maximum profit if the current profit is greater
            maxprofit = max(cost, maxprofit);

            // Update the minimum price if the current price is lower
            mini = min(prices[i], mini);
        }

        // Return the maximum profit found
        return maxprofit;
    }
};
