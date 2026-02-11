# 27. [Remove Element](https://leetcode.com/problems/remove-element/)

## Slow-Fast Pointers
> O(n)
- One pointer `slow` is used to keep track of the position of the last non-target element, while the other pointer `fast` is used to traverse the array and find elements that are not equal to the target value.
- When `fast` encounters a non-target element, it increments `slow` and updates the position of the last non-target element to the current position of `fast`.