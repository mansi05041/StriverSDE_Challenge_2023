# [Word Break II](https://www.codingninjas.com/studio/problems/word-break-ii_8230786?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input-Output](#input-output)
- [Algorithm](#algorithm)

## Question
You are given a non-empty string S containing no spaces and a dictionary of non-empty strings. You are supposed to construct and return all possible sentences after adding spaces in the originally given string "S", such that each word in a sentence exists in the given dictionary.

## input-output
Input:dict = {god is now no where here}, string = 
"godisnowherenowhere" </br>
Output: [god is no where no where, god is no where now here, god is now here no where, god is now here now here]

## Algorithm
It uses backtracking and dynamic programming
- The helper function is a recursive function that takes the input string s, the current index 'idx', the dictionary of words 'dict', a dynamic programming memorization map 'dp', and the size of the string 'size'.
- In the helper function, handle the base case where we have reached the end of string then return empty vector.
- If the subproblem is already solved then return the result.
- Explore the valid word starting from current index.
- if the current substring word is not present in the dictionary, then continue to the next iteration.
- if the word is present in the dictionary, check if we have reached the end of string (i==size-1). If so, we add the 'word' to the result vector and break the loop.
- If we haven't reached the end of the string, we make a recursive call to the helper function, starting from the next index (i+1). The resulting vector of substrings is stored in 'subString'.
- Iterate over each substring in 'SubString' and append to the current 'word' to it, separated by a space. We add these modified substrings to the result.
- Finally store result in the dp at the current index idx and return it.

Time Complexity: O(n*m*k) </br>
Space Complexity: O(n*m)

<code>n is the length of string</br>
m is the average length of words in dictionary</br>
k is the number of words in the dictionary</code>