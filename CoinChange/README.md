# [Ways to Make Coin Change](https://www.codingninjas.com/studio/problems/ways-to-make-coin-change_8230691?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an infinite supply of coins of each of denominations D = {D0,D1,D2,....Dn-1}. Need to figure out the total number of ways W, in which you can make a change for value V using coins of denominations from D, print 0 if a change isn't possible.

### Input_output
Input: [10 1 2 7 6 1 5], target = 8 </br>
Output: [ [1 1 6] [1 2 5] [1 7] [2 6] ]

## Algorithm

### Recursion
```
Recursion(target,idx){
    // base case
    if(idx==0) return target % arr[0] == 0 ? 1 : 0;

    // not take the coin
    notTake = Recursion(target,idx-1);

    // take the coin
    take = 0;
    if(arr[idx]<=target) take = Recursion(target-arr[idx],idx);

    return notTake + take;
}
```
Time Complexity : O(exponential) </br>
Space Complexity : >>O(N)

### Memorization
- Initializes a 2d vector 'dp' of size <code>n X value+1</code> with all elements initialized to -1. 'n' represents number of denominations and 'value+1' represents the possible values from 0 to target value.
- In the Memorization function :
    - Base case: idx == 0 then it checks if the remainig value is divisible by the first denomination. If it is, return 1(indicating one way to make change), otherwise, it returns 0(indicating no way to make change using the first denomination)
    - If the base case is not met, it checks if the result for the current subproblem is already present in the memorization array. If it is, it directly returns the result.
    - If the result is not available in 'dp', the function calculates the number of ways to make change:
        - one way is not take the current denomination(notTake) and move to the next denomination.
        - The other way is to take the current denomination(take) if its value is less than or equal to the remaining value, and recursively call the function with the reduced value and the same denomination ('idx' remains unchanged).
    - The result for the current subproblem is the sum of two ways calculated in the previous step.
    - return the result

Time Complexity : O(n*value) </br>
Space Complexity : O(n*value) + O(n)

### Tabulation
- Initializes a 2D vector 'dp' of size <code>n X value+1</code> with the elements initialized to -1. 
- The base case is initialized for the first row of 'dp' where dp[0][i] is set to 1 if value 'i' is divisible by the first denomination, otherwise it is set to 0. 
- The outer loop iterates through the denominations from the i=1 to n-1 and inner loop iterates through the values from 0 to target value.
- For each denomination and value combination, the dp[i][j] value is calculated by considering two cases:
    - Not take the current denomination: dp[i][j] remains the same as the value from the previous row (dp[i-1][j]).
    - Take the current denomination: if the current denomination is less than or equal to the current value 'j', it means we can use the current denomination to make change. So, we add the value from the same row but at the column (j-denominations[i]). 
- After filling the entire dp table, the function returns the result stored in dp[n-1][value], which represents the total number of ways to make change for the given value using the given denominations.

Time Complexity : O(n*value) </br>
Space Complexity : O(n*value)