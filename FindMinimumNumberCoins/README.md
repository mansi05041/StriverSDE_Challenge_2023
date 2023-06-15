# [Find Minimum Number of Coins](https://www.codingninjas.com/codestudio/problems/find-minimum-number-of-coins_8230766?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a value of V Rs and an infinite supply of each of the denominations {1, 2, 5, 10, 20, 50, 100, 500, 1000} valued coins/notes, The task is to find the minimum number of coins and/or notes needed to make the change?

### Input_output
Input: 13 </br>
Output: 3

## Algorithm
- Initialize a vector of coin denominations in descending order.
- Initialize a variable named 'total' to keep track of total number of coins.
- Iterate through the coin denominations vector from the largest denomination to the smallest.
    - while the current coin denomination is less than or equal to the remaining amount, then </br>
    <code>amount-=current coin denomination</code></br>
    <code>total+=1<code>
- return total
Time Complexity : O(n)</br>
Space Complexity : O(1)

