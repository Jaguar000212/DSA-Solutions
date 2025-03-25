//	Brute-Force #2

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums.at(0);
        for(int start = 0; start < nums.size(); start++){
            for(int end = start; end < nums.size(); end++){
                int sum = nums.at(start);
                for(int i = start + 1; i <= end; i++){
                    sum += nums.at(i);
                }
                max = max > sum ? max : sum;
            }
        }
        return max;
    }
};