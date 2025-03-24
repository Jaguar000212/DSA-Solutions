# 50. [Pow(x, n)](https://leetcode.com/problems/powx-n/)

## Binary Exponentiation
> O(logn)
- Changed the given power to its Binary form.
- Iterated through each binary digit from the right.
- Place Value of each digit is x¹, x², x⁴, x⁶...
- If the digit is 1, answer is multiplied with its place value.
- Final answer is returned after complete iteration.
- If the power is negative, its absolute value is taken and the base is inversed.