# [Fractional KnapSack](https://www.codingninjas.com/codestudio/problems/fractional-knapsack_8230767?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given weights and values of 'N' items. Also given a knapsack of size 'W'. Task is to put the items in the knapsack such that total value of items in the knapsack is minimum.

### Input_output
Input: w=200, [[50 40 90 120 10 200]
[40 50 25 100 30 45]] </br>
Output: 204.00

## Algorithm
- sorted the given vector in descending order based on the value-to-weight ratio using sort and compare function.
- Initialize the variable 'ans' and 'currW' to 0. 'ans' keeps track of the total value of the items selected, and 'currW' keeps the track of the current weight accumulated in the knapsack.
- The items are iterated through in the sorted order.
    - For each item, if the weight of the item + current weight <= maximum weight, then the item is fully included in the knapsack. The value of the item is added to 'ans' and the weight of the items is added to 'currW'/
    - if the weight of item + current weight > maximum weight, it means that only a fraction of the item can be included in the knapsack to utilize the remaining capacity (w-currW) to the weight of the item. The value of fractional item is added to the 'ans' and the loop is terminated by break statement.
- return ans, that represents the maximum value achievable within the weight capacity.

Time Complexity : O(n logn)</br>
Space Complexity : O(1)

