# Painter's Partition Problem

Given are N boards of length of each given in the form of array, and M painters, such
that each painter takes 1 unit of time to paint 1 unit of the board.

The task is to find the minimum time to paint all boards under the constraints that any
painter will only paint continuous sections of boards

Calculate and return that minimum possible number.
Return -1 if a valid assignment is not possible.

## Modified Binary Search

> O(log(sum(time))) * O(N)

- First, we find our search space, which will be all possible solutions, regardless of the conditions provided, for
  allocation of boards to N painters, i.e. from max(time) to sum(time).
- We'll then apply binary space over this sorted range to find out the minimum valid solution which satisfies all the
  conditions.
- If the middle value is invalid, we'll move to right since the smaller values will be invalid as well.
- If the middle value is valid, we'll store it as temporary answer and move to left to find out if there is any smaller,
  valid answer.
- Final value of the temporary answer is returned.
- To check if the current middle value is valid, we can iterate over the boards and keep track of the number of painters used.
- If the current painter is unable to paint the current board (time > middle value), we can assign the next painter to it.
- If the number of painters used exceeds M, we can return false.