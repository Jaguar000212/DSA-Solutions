class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

//	Brute-Force

        for(int i = 0; i<nums.size()-1; i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target)
                    return {i, j};
            }
        }

//	Optimal Brute-Force, only if input is sorted

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