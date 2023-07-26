# [Edit Distance](https://www.codingninjas.com/studio/problems/edit-distance_8230685?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two Strings 'S' and 'T' of lengths 'N' and 'M' respectively. Find the "Edit Distance" between the strings. Edit Distance of two strings is the minimum number of steps required to make one string equal to the other. In order to do so, you can perform the following three operations:
- Delete a character
- Replace a character with another one
- Insert a character

### Input_output
Input: s1= "abc", s2= "dc" </br>
Output: 2

## Algorithm

### Recursion
```
bool Recursion(int i,int j,string str1,string str2){
  // base case
  // str1 exhausted then it requires j+1 insertion steps
  if(i<0) return j+1;
  // str2 exhausted then it requires j+1 deletion steps
  if(j<0) return i+1;

  // if the character matches then shrink the search space
  if(str1[i]==str2[j]) return 0 + Recursion(i-1,j-1,str1,str2);

  // explore all the options
  int insertion = 1 + Recursion(i,j-1,str1,str2);
  int deletion = 1 + Recursion(i-1,j,str1,str2);
  int replace = 1 + Recursion(i-1,j-1,str1,str2);

  return min(insertion,min(deletion,replace));
}
```
Time Complexity: O(exponential) </br>
Space Complexity: O(n)

### Memorization
- In the above recursion, we will use Memorization map to save the results of overlapping sub problems.
- after the base case, if the subproblem is already solved then return it.
- at the end of recursion, before returning the result first save it in memorization map.

Time Complexity: O(m*n) </br>
Space Complexity: O(n) + O(m*n)

### Tabulation
- Initialize a 2d dp table with dimension (str1.size()+1) * (str2.size()+1) and initialize all cells to -1.
- Set the base cases:
    - for each index i=0 to str1.size() <code>dp[i][0] = i</code>.
    - for each index j=0 to str2.size() <code>dp[0][j] = j</code>.
    
- Fill the dp table using a bottom-up approach
    - start i=1 and j=1
    - For each index i from 1 to str1.size() and each target sum j from 1 to str2.size(), calculate the dp[i][j]
        - if str1[i-1] = str2[j-1], then set <code>dp[i][j]=dp[i-1][j-1]</code>
        - If the characters don't match, compute the costs of different edit
            - insertion: 1+dp[i][j-1]
            - deletion: 1+dp[i-1][j]
            - Replacement: 1+dp[i-1][j-1]
            choose the minimum of these costs and set dp[i][j] to that value.
- After the filling the dp table, result will be stored in dp[str1.size()][str2.size()].

Time Complexity: O(n*m) </br>
Space Complexity: O(n*m)