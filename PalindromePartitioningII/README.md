# [Palindrome Partitioning II](https://www.codingninjas.com/studio/problems/palindrome-partitioning-ll_8230732?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a string 'str' of length 'n'. Find the minimum number of partitions in the string so that no partition is empty and every partitioned substring is a palindrome.

### Input_output
Input: str = "aaccb" </br>
Output: 2

## Algorithm

### Recursion
```
int Recursion(int idx, string str,int n){
  // base case
  if(idx==n) return 0;

  int minPartition = 1e9;

  for(int j=idx;j<n;j++){
    if(isPalindrome(str.substr(idx,j-idx+1))){
        int partition = 1 + Recursion(j+1,str,n);
        minPartition = min(minPartition,partition);
    }
  }

  return minPartition;
}
```
Time Complexity: O(2<sup>n</sup>) </br>
Space Complexity: O(n)

### Memorization
- In the above recursion, we will use Memorization map to save the results of overlapping sub problems.
- after the base case, if the subproblem is already solved then return it.
- at the end of recursion, before returning the result first save it in memorization map.

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(n)

### Tabulation
- Initialize the dp same as used in Memorization
- Iterate i=n-1 to 0
    - Iterate j = i to n-1
        - if the str.substr(i,j-i+1) is a palindrome then have a partition of 1 + dp[j+1] and minimize the partitions.
    - store dp[i] = minimal partition obtained
- return dp[0]-1

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(n)