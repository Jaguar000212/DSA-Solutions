class Solution {
    fun removeElement(nums: IntArray, `val`: Int): Int {
        val n = nums.size
        var count = 0
        for (i in 0 until n) if (`val` != nums[i]) nums[count++] = nums[i]
        return count
    }
}