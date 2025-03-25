# 121. [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Best Buy or Minimum Element
> O(n)
- Iterated through complete array, considering each element as selling price.
- While iteration, accounted the minimum element as well (Best Buy).
- If `bestBuy - element` is > MaxProfit, it is replaced.
- If any element is < BestBuy, it is replaced as well.
- Final `MaxProfit` is returned as answer.
- Since it is initialised as 0, 0 will automatically be returned when there's no profit.