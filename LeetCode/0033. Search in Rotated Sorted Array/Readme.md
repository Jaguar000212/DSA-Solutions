# 33. [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

## Binary Search, modified
> O(logn)
- Applied Binary Search to find the element.
- First checked which part of the element is sorted, and if the element exists in that part.
- If its sorted and the element exists, array is narrowed down to that part otherwise to its counter.
- The process is looped as long as start <=end. If middle element get equal to targerm middle is returned otherwise -1 is returned to depict the absence of target in the array.