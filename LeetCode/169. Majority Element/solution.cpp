class Solution {
public:

//	Brute-Force

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

//	Brute-Force (sorted)

    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        float target = nums.size()/2.0;
        int ans = nums.at(0);
        int frequency = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums.at(i) == nums.at(i-1))
                frequency++;
            else{
                frequency = 1;
                ans = nums.at(i);
            }
            if(frequency > target)
                return ans;
        }
        return ans;
    }

//	Moore's Voting Algorithm  

    int majorityElement(vector<int>& nums) {
        int ans = 0, frequency = 0;
        for(int i = 0; i < nums.size(); i++){
            if(frequency == 0)
                ans = nums.at(i);
            if(nums.at(i) == ans)
                frequency++;
            else
                frequency--;
        }
        return ans;
    }
};