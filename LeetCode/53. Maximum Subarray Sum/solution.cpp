class Solution {
public:
    int maxSubArray(vector<int>& nums) {
	
//	Brute-Force #1
	
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


//	Brute-Force #2

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

//	Kadane's Algorithm

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