# [Word Break](https://www.codingninjas.com/studio/problems/word-break_8230808?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input-Output](#input-output)
- [Algorithm](#algorithm)

## Question
You are given a list of "N" strings. Task is to check whether you can form a given target string using a combination of one or more strings of A.

## input-output
Input: [ab cd], target="abcd" </br>
Output: true

## Algorithm
- Create a set 'st' to store all the words from the array 'arr'.
- Initialize a memorization vector 'dp' of size target.size() with all elements set to -1 to indicate that the subproblems have not been solved yet.
- Call the 'memorization' function with the initial index 'idx' as 0 and the target string

memorization function
- Base case: if <code>idx>=len(target)</code>, then return true as we have reached the end of the string successfully.
- Check if the subproblem at index 'idx' has already been solved. If yes, return the result.
- Iterate over each substring starting from the index 'idx' to the end of the target string. Form a subtring 'str' by adding characters one by one.
- check if 'str' exists in the set, if yes recursively call 'memorization' with the updated index 'i+1'
- If the recursive call returns true, update dp[idx]=1, indicating current substring starting at index 'idx' can be formed using words from 'arr' and return true
- If no substring is found, update dp[idx]=0, indicating that the current substring starting at index 'idx' cannot be formed using words from 'arr', and return false.

Time Complexity: O(n<sup>2</sup>*log m) </br>
Space Complexity: O(n+m)