# [Cut Logs](https://www.codingninjas.com/studio/problems/cut-logs_8230782?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a 'K' number of axes and an infinite amount of logs. Log cutting stand has a capacity of 'N', which means you can only try to cut at max 'N' logs in one go. All the axes are exactly same and can cut upto to some logs in one go. If we try to cut more logs than its capacity the axe will break. To improve efficiency, task is to find how many logs can you cut with an axe without breaking it. Minimum number of moves and in the alloted number of axes.

### Input_output
Input: k=2, n=6 </br>
Output: 3

## Algorithm

### Recursion
```
int cutLogs(int k, int n){
  // base case
  if(n==0) return 0;
  if(k==0) return INT_MAX;

  int ans = n;
  for(int i=1;i<=n;i++){
    int curr = max(cutLogs(k-1,i-1),cutLogs(k,n-i));
    ans = min(curr,ans);
  }

  return ans;
}
```
Time Complexity: O(2<sup>n</sup>) </br>
Space Complexity: O(n)

### Memorization + binary search
- Base cases
  - if n<=0 or k<=0 , it means there is no log to cut or no more cuts allowed. In this case return 0
  - If k==1, means only one cut is allowed so return the length of log 'n'
  - If n==1, means the log is of length 1, it only requires one cut.
- Memorization : if the subproblem is already solved then return dp[n][k]
- Perform Binary search
  - Initialize low = 1 and high = n
  - While low<=high, perform the following steps
    - calculates the mid point
    - It recursively calculates the number of cuts required to cut the left part of the log from (1 to mid-1) with k-1 cuts allowed, and the number of cuts required to cut the right part of the log from (mid to n) with k cuts allowed.
    - It takes the maximum of two results
    - It updates the minimum number of cuts required 'ans'.
    - Adjusts the low and high pointer based on whether the broken part or notBroken part needs more cuts.
- return dp[n][k] = ans

Time Complexity: O(n*k*log(n)) </br>
Space Complexity: O(n) + O(n*k)
