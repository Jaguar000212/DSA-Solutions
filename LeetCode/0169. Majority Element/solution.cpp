//	Brute-Force

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element_idx;
        float target = nums.size()/2.0;
        for(int i: nums){
            int frequency = 0;
            for(int j: nums){
                if(i == j)
                    frequency++;
            }
            if (frequency >= target)
                return i;
        }
	return -1;
    }
};