# [136. Single Number](https://leetcode.com/problems/single-number/)
> O(n)

Used XOR to cancel out duplicates since `1 XOR 1 = 0` and `0 XOR 0 = 0`.  
At last, only the number with no duplicate is left out because `1 XOR 0 = 1`.
### Limitation
- If there are multiple single valuse.
- If the numbers are repeated in odd multiples.
