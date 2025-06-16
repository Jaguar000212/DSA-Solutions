# 567. [Permutation in String](https://leetcode.com/problems/permutation-in-string/)

## Brute-Force 
> O(n²)
- Created a frequency map of the first string.
- Iterated through the second string, maintaining a sliding window of the same length as the first string.
- For each window, created a frequency map and compared it with the first string's frequency map.