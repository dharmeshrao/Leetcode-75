#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int arrSize = nums.size();
        for(int i = 1;i< arrSize;i++){
            nums[i] = nums[i] + nums[i-1];
        }
        return nums;
    }
};