#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            else{
                if (profit<prices[i]-buy){
                    profit=prices[i]-buy;
                }
            }
        }
        return profit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = sol.maxProfit(prices);

    cout << "The maximum profit is: " << result << endl;

    return 0;
}