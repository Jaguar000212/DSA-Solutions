class Solution {
    fun threeSum(nums: IntArray): List<List<Int>> {
        nums.sort()
        val res = mutableListOf<List<Int>>()
        val n = nums.size
        for (i in 0..n-2) {
            if (i > 0 && nums[i] == nums[i - 1]) continue
            var left = i+1
            var right = n-1
            while (left < right) {
                val sum = nums[left] + nums[right] + nums[i]
                when {
                    sum == 0 -> {
                        res.add(listOf(nums[left], nums[right], nums[i]))
                        left++
                        right--

                        while (left < right && nums[left] == nums[left - 1]) left++
                        while (left < right && nums[right] == nums[right + 1]) right--
                    }
                    sum < 0 -> left++
                    else -> right--
                }
            }
        }
        return res
    }
}