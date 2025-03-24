# 1. [Majority Element](https://leetcode.com/problems/majority-element)

## Brute-Force
> O(n²)
- Simply calculated the frequency of all the elments until its equal to or greater than n/2.
- Value is returned once it satisfies the condition.

## Brute-Force (Optimised)
> O(nLog(n))
- Sorted the vector.
- Calculated the frequency in a single loop until the target is hit.
- Value is returned.

## Moore's Voting Algorithm
> O(n)
- Instantiated frequency as 0.
- Iterated through the vector.
- If frequency is zero, answer is set to the current element.
- Then if the current element is equal to the answer, frequency is incremented else decremented.
- At the end of iteration, final answer is returned.