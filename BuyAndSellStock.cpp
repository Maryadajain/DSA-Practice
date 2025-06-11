//Buy and Sell Stock with maximum profit
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices){
    int minPrice = prices[0];
    int maxProfit = 0;
    int n = prices.size();
    for(int i =0; i < n; i++){
        int cost = prices[i] - minPrice;
        maxProfit = max(maxProfit, cost);
        minPrice = min(minPrice, prices[i]);
    }
    return maxProfit;
}  

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum profit: " << maxProfit(prices) << endl; // Output: 5
    return 0;
}