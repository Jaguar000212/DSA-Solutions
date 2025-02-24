# 1. [Two Sum](https://leetcode.com/problems/two-sum)

## Brute-Force
> O(n²)
- Simply calculated all the possible pairs and then calculated their sum.
- Returned the pair whose sum is equal to the target.

## Brute-Force (Optimised)
> O(n)
- Sorted the vector.
- Used two pointer approach with each pointer at start and end of the array.
- Calculated the sum, if its less than the target, incremented the starting pointer, if its greater than the target, decremented the end pointer.
- If the sum is equal, we have the answer.