# 53. [Maximum Subarray Sum](https://leetcode.com/problems/maximum-subarray/)
## Brute-Force
> O(n<sup>2</sup>)
- Calculated all the possible subarrays and then their sum, returned the max value.
- Optimised by using only 2 loops instead of three.

## Kadane's Algorithm
> O(n)
- Calculated sum upto an index, checked if its greater than the number itself.
- If its greater, then reset the current sum to the number. (Elemnts before it can't participate in increasing the sum as they will reduce it only).
- Max value of such subarray sums is returned.
