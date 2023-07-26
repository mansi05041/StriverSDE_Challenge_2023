# [Subset Sum Equal To K](https://www.codingninjas.com/studio/problems/subset-sum-equal-to-k_8230844?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of N integers and an integer k. Task is to check if there exists a subset in arr with a sum equal to k.

### Input_output
Input: arr = [1 2 3 4], k=4 </br>
Output: True

## Algorithm

### Recursion
```
bool Recursion(int idx,int target,vector<int>& arr){
    // base case
    if(target==0) return true;
    if(idx==0) return target==arr[idx];

    // not to take the element
    bool notTake = Recursion(idx-1,target,arr);
    
    // take the element
    bool take = false;
    if(target>=arr[idx]) take = Recursion(idx-1,target-arr[idx],arr);

    return notTake || take;
}
```

Time Complexity: O(2<sup>n</sup>) </br>
Space Complexity: O(n)

### Memorization
- In the above recursion, we will use Memorization map to save the results of overlapping sub problems.
- after the base case, if the subproblem is already solved then return it.
- at the end of recursion, before returning the result first save it in memorization map.

Time Complexity: O(n*k) </br>
Space Complexity: O(n) + O(n*k)

### Tabulation
- Initialize a 2d dp table with dimension (n*k+1) and initialize all cells to false.
- Set the base cases:
    - for each index i=0 to n-1 set dp[i][0] = true, as it is always possible to achieve the target sum of 0
    - set dp[0][arr[0]] to true, as the target is equal to the the arr[0]
- Fill the dp table using a bottom-up approach
    - start i=1 and j=1
    - For each index i from 1 to n-1 and each target sum j from 1 to k, calculate the dp[i][j]
        - notTake : dp[i-1][j]
        - take : Check if it is possible to achieve the target sum j-arr[i].
        - set dp[i][j] = notTake or take
- After the filling the dp table, result will be stored in dp[n-1][k].

Time Complexity: O(n*k) </br>
Space Complexity: O(n*k)