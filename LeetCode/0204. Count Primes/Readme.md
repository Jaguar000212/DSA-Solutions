# 204. [Count Primes](https://leetcode.com/problems/count-primes/)

## Sieve of Eratosthenes
> O(nlogn)

- Create a boolean array `is_prime` of size `n` initialized to `True`.
- Iterate from `2` to `n`:
- If `is_prime[i]` is `True`, mark all multiples of `i` as `False`.
- Count the number of `True` values in `is_prime` from `2` to `n`.
- Return the count.