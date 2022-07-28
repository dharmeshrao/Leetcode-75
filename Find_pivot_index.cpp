class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightArraySum = 0;
        int leftArraySum = 0;
        for(int i = 0;i< nums.size();i++){
            rightArraySum += nums[i];
        };
        
        for(int i = 0;i< nums.size();i++){
            rightArraySum -= nums[i];
            if(rightArraySum == leftArraySum){
                return i;
            }
            leftArraySum += nums[i];
        }
        
        return -1;
    }
};