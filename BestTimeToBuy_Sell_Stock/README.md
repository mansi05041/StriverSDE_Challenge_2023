# [Best Time to Buy and Sell Stock](codingninjas.com/codestudio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array 'prices' where the elements of the array represent the prices of the stock as they were yesterday and indices of the array represents minutes. The task is to find and return the maximum profit. You can buy and sell the stock only once.

### Input_output
Input: [1 2 3 4] </br>
Output: 3

## Algorithm

### Naive Approach
- In nested loop find the profit. The outer loop iterates over the prices from the first element to second last element. The inner loop iterates over the prices from the element after the current outer loop index to last element.
```
function maximumProfit(prices):
    n = length(prices)
    maxProfit = 0

    for i = 0 to n - 2:
        for j = i + 1 to n - 1:
            profit = prices[j] - prices[i]
            if profit > maxProfit:
                maxProfit = profit

    return maxProfit

```
Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(1)

### better approach
- Initialize 'minPrice' as prices[0]
- Intialize 'profit' as 0, representing the maximum profit.
- Iterate from index 1 to n-1
    - check if the current price is less than minPrice, if so update minPrice.
    - else if check if prices[i]-minPrice is greater than profit, if true update the profit.
- Return the profit.

Time Complexity: O(n)</br>
Space Complexity: O(1)
