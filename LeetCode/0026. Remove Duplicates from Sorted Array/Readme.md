# 26. [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
## Slow-Fast Pointers
> O(n)
- One pointer `slow` is used to keep track of the position of the last unique element, while the other pointer `fast` is used to traverse the array and find unique elements.
- When `fast` encounters a unique element (i.e., an element that is different from the last unique element), it increments `slow` and updates the position of the last unique element to the current position of `fast`.
