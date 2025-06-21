# 151. [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)

## Break down into words and reverse them
> O(n)
- Find the first and last non-space characters from the back of the string.
- Placed it into a new string with a space.
- Repeat until the iteration is complete.
- Return the new string without the trailing space.