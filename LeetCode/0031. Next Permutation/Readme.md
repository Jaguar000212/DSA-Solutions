# 31. [Next Permutation](https://leetcode.com/problems/next-permutation/)

## Basic Search and Sorting
> O(n)
- FInd the pivot element which is the first element from the last which is smaller than its next element.
- If there's no pivot, it means the last permuatation is present and thus we'll reverse the array to get back to the first.
- If we get the pivot, we'll swap it with the next element which is just greater than the pivot.
- Finally, we'll reverse all of the elements after the pivot to get to the answer.