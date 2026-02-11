# 14. [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix)

## Horizontal scanning
> O(n*m)
- Considered a prefix of the first string as the longest common prefix.
- Compare it with the next string, if it is a common prefix, keep it as the longest common prefix; otherwise, trim remove the non-matching part.
- Repeat the process for all strings.
