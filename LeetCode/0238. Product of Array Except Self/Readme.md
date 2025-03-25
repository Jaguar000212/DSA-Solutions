# 238. [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)

## Prefix-Suffix
> O(n)
- Product of all numbers except the element is basically product of all numbers before it (Prefix) multiplied by that of all numbers after it (Suffix).
- Calculated Prefix of all elements in first loop, stored in a vector.
- Then Suffix of all elements in second loop, again stored.
- Lastly, multiplied both suffixes and prefixed for that element.
- Stored all the values in a vector and returned the result.

To optimise space complexity, instead of storing prefixes and suffixes in separate vectors, they are strored directly in the result vector.  
Prefixes are stored in result as it is. While calculating suffix, suffix of a particular instance is multiplied with the current element of result vector. This reduces the space complexity from O(n³) to O(1).