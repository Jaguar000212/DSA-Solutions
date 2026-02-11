# 15. [3Sum](https://leetcode.com/problems/3sum)

## Two-Pointer
> O(n²)
- Sort the array.
- Fix one element `nums[i]`, and use two pointers to find pairs `nums[left]` and `nums[right]` such that `nums[i] + nums[left] + nums[right] == 0`.
- Move the pointers based on the sum and skip duplicates.
