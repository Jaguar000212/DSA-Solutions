//	Brute-Force #1

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxed = nums.at(0);
        for(int i = 0; i < nums.size(); i++){
            int sum = 0;
            for(int j = i; j < nums.size(); j++){
                sum += nums.at(j);
                maxed = maxed > sum ? maxed : sum;
            }
        }
        return maxed;
    }
};