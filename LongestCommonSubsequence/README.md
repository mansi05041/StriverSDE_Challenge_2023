# [Longest Common Subsequence](https://www.codingninjas.com/studio/problems/longest-common-subsequence_8230681?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two strings 'S' and 'T' with the lengths 'M' and 'N', find the length of common Subsequence.

### Input_output
Input: s = "adebc", t = "dcadb" </br>
Output: 3

## Algorithm

### Recursion
```
int Recursion(int i,int j,string str1,string str2){
  // base case 
  if(i<0 || j<0) return 0;

  // if the character matches
  if(str1[i]==str2[j]) return 1 + Recursion(i-1,j-1,str1,str2);

  // if not matches, then explore other ways
  return max(Recursion(i-1,j,str1,str2),Recursion(i,j-1,str1,str2));

}
```
Time Complexity: O(2<sup>n</sup>) </br>
Space Complexity: O(n)

### Memorization
- In the above recursion, we will use Memorization map to save the results of overlapping sub problems.
- after the base case, if the subproblem is already solved then return it.
- at the end of recursion, before returning the result first save it in memorization map.

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(n) + O(n<sup>2</sup>)

### Tabulation
- Initialize the dp same as used in Memorization
- Iterate i = 1 to s.size()
  - Iterate j = 1 to t.size()
  - if the character matches i.e., <code>s[i-1]==t[j-1]</code> then set dp[i][j] = 1 + dp[i-1][j-1]
  - else the character not matches, then set dp[i][j] = max(dp[i-1][j],dp[i][j-1])
- return dp[s.size()][t.size()]

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(n<sup>2</sup>)