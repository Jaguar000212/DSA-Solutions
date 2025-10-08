class Solution {
    fun maxProduct(nums: IntArray): Int {
        var max1 = 0
        var max2 = 0

        nums.forEach {
            if (it > max1) {
                max2 = max1
                max1 = it
            }
            else if (it > max2) {
                max2 = it
            }
        }
        return (max1 - 1) * (max2 - 1)
    }
}