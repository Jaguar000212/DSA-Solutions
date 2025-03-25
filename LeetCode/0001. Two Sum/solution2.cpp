//	Optimal Brute-Force, only if input is sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	int i = 0, j = nums.size() - 1;
        while(i < j){
            int curSum = nums.at(i) + nums.at(j);
            if(curSum > target)
                j--;
            else if(curSum < target)
                i++;
            else
                return {i, j};
        }
        return -1;
    }
};