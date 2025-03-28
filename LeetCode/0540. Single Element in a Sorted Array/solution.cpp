class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        if(right == 0) return nums[right];

        while(left <= right){
            int middle = left + (right - left) / 2;

            if(middle == 0 && nums[middle] != nums[middle + 1]) return nums[middle];
            if(middle == nums.size() && nums[middle] != nums[middle - 1]) return nums[middle];
            if(nums[middle] != nums[middle + 1] && nums[middle] != nums[middle - 1]) return nums[middle];
            
            if(middle % 2 == 0){
                if(nums[middle] == nums[middle - 1]) right = middle - 1;
                else left = middle + 1;
            }
            else{
                if(nums[middle] == nums[middle + 1]) right = middle - 1;
                else left = middle + 1;
            }
        }
        return -1;
    }
};
