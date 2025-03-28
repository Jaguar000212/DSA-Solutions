# 540. [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/)

## Modified Binary Search
> O(logn)
- Modified binary search to check if the middle element is != its previous and the next element as well to return it.
- If not, checked whether the required element is present in left side or right side of the array by comparing the middle element with its adjacent elements.
- If middle element = to its previous element and number of elements to the left of the middle are even, then the single element must be present in the left side or vice versa.
- Corner cases are handled for further optimisations ensuring there is no error.