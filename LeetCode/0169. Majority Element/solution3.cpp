//	Moore's Voting Algorithm 

class Solution {
public:
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