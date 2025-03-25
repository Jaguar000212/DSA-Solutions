//	Brute-Force (sorted)

class Solution {
public:
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
};