# 11. [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

## Two Pointers
> O(n)
- Placed two pointers at start and end of the vector.
- Calculated the area between the two pointers.
- Moved the pointer with smaller value closer to the other, then again calculated the area between them until they become equal.
- Maximum of all areas is returned.

The pointer which affected the required value is changed. For example, if the pointer with bigger value was to be changed, no matter what but the result would be smaller. That's why pointer with smaller value is displaced because smaller value is direclty affecting the area and only it can increase it.