#include <limits>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = std::numeric_limits<int>::max();
        int result = 0;
        for(int i = 0;i< prices.size();i++){
            min = std::min(min,prices[i]);
            if(prices[i] - min > result)result = prices[i] - min;
        }
        return result;
    }
};