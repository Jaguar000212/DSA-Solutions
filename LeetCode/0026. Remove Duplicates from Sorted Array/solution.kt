class Solution {
    fun removeDuplicates(nums: IntArray): Int {
        var count = 1
        var current = nums.first()
        for (i in 1 until nums.size) {
            if (nums[i] != current) {
                current = nums[i]
                nums[count++] = nums[i]
            }
        }
        return count
    }
}