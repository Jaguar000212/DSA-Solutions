class Solution {
    fun threeSumClosest(nums: IntArray, target: Int): Int {
        nums.sort()
        val n = nums.size
        var res = nums[0] + nums[1] + nums[2]
        for (i in 0 until n-2) {
            var left = i + 1
            var right = n - 1
            while (right > left) {
                val sum = nums[i] + nums [left] + nums[right]
                if (abs(target - sum) < abs(target - res)) res = sum

                if (target > sum) left++
                else if (target < sum) right--
                else return sum
            }
        }
        return res
    }
}