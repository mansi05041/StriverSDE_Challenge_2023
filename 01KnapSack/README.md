# [0 1 Knapsack](https://www.codingninjas.com/studio/problems/0-1-knapsack_8230801?challengeSlug=striver-sde-challenge)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. Note that we have only one quantity of each item. In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent values and weights associated with N items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or dont pick it (0-1 property).

### Input_output
Input: weights = [1 2 4 5],
values = [5 4 8 6], w = 5 </br>
Output: 5->7->9->NULL </br>
Explaination: The most optimal way to fill the knapsack is to choose items with weight 4 and value 8, weight 1 and value 5.</br>
<code>The total value of the knapsack =  8 + 5 = 13.</code>

## Algorithm

### Recursion
```
int Recursion(int idx,vector<int>& values,vector<int>& weights,int w){
    // base case
    if(idx==0){
        if(weights[0]<=w) return weights;
        return 0;
    }

    // consider that we are not picking that element
    int notTake = 0 + Recursion(idx-1,values,weights,w);

    // consider to take the element
    int Take = INT_MIN;
    if(weights[idx]<=w) Take = values[idx] + Recursion(idx-1,values,weights,w-weights[idx]);

    return max(notTake,Take);
}
```
Time Complexity: O(2<sup>n</sup>)</br>
Space Complexity: O(n)

### Memorization
- Use a 2d array dp[N][W+1], where W is the weight from 0 to weight-1
- Initialize the dp array to -1.
- In Recursion function after checking the index condition, we will check if the dp[index][weight]!=-1, if yes then return the value from the dp array.
- If not find the answer for the given value using recursion function and before returning the value set dp[index][weight] to the obtained solution.

Time Complexity: O(n*w)</br>
Space Complexity: O(n*w) + O(n)

### Tabulation
- Similarly use dp array as used in memorization method.
- Set the base case ie., dp[0][i] = val[0] if the weight of item is lesser or equal to the total weight of the bag.
- we use nested loop to apply the recursion logic.
- return dp[n-1][w]

Time Complexity: O(n*w)</br>
Space Complexity: O(n*w) 
