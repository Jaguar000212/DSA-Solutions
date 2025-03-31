# Book Allocation Problem

There are N books, each i'th book has pages[i] number of pages.

You have to allocate books to 'M' number of students so that the maximum number of pages allocated to a student is
minimum.

- Each book should be allocated to a student.
- Each student has to be allocated at least one book.
- Allotment should be in contiguous order.

Calculate and return that minimum possible number.
Return -1 if a valid assignment is not possible.

## Modified Binary Search

> O(logn)

- First, we find our search space, which will be all possible solutions, regardless of the conditions provided, for
  allocation of pages to 1 student, i.e. from 0 to sum(pages).
- We'll then apply binary space over this sorted range to find out the minimum valid solution which satisfies all the
  conditions.
- If the middle value is invalid, we'll move to right since the smaller values will be invalid as well.
- If the middle value is valid, we'll store it as temporary answer and move to left to find out if there is any smaller,
  valid answer.
- Final value of the temporary answer is returned.
