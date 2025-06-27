# 433. [String Compression](https://leetcode.com/problems/string-compression/)

## Basic Vector Operations
> O(n)

- Iterate through the vector and count consecutive characters.
- Convert the count to a string and append it to the character.
- If the count is 1, only append the character.
- Update the vector in place with the compressed version.