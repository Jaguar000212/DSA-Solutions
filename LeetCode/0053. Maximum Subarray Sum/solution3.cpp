//	Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxed = nums.at(0);
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum = max(nums.at(i), sum + nums.at(i));
            maxed = max(sum, maxed);
        }
        return maxed;
    }
};