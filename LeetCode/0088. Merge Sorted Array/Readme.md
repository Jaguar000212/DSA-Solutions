# 88. [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)

## Basic Merge Operation
> O(m+n)
- Iterated accross both the arrays backwards to eleminate the need of another aaray.
- Copied the greater element to the current position of the array and moved towards the left each time until the array is exhausted.
- Copied all of the leftover elements.