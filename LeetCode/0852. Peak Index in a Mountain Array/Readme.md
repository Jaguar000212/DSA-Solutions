# 852. [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)

## Modified Binary Search
> O(logn)
- Modified binary search to check if the middle element is > its previous and the next element as well to return it.
- If not, checked whether the required element is present in left side or right side of the array by comparing the middle element with its adjacent elements.
- If its > its previous but < its next, then the peak should be in right half.
- If its < its previous but > its next, then the peak should be in left half.