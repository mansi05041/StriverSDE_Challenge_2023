# [Count and Say](https://www.codingninjas.com/studio/problems/count-and-say_8230807?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input-Output](#input-output)
- [Algorithm](#algorithm)

## Question
Write as you speak is a special sequence of strings that starts with string "1" and after one iteration you rewrite the sequence as whatever you speak.

## Input-Output
Input: n=4 </br>
Output: 1211

## Algorithm
- Initialize a string 'str' with the value "1"
- Repeat the following process (n-1) times:
    - update 'str' to the result obtained by calling the 'buildString' function with str as input.
- After the loop ends, return the final str.

Implementation of buildString function
- Initialize a variable 'freq' to 1 and a character 'str' to the first character of the input 'num'.
- Initialize an empty string 'result' to store the final result.
- Loop through the input 'num' from index 1 to the end:
    - If the current character 'str' is equal to characeter at num[i], then increment the freq.
    - If not, then it means a new character is found.
        - Append the frequency 'freq' of the str to the result.
        - Append the str into result
        - update the str to the current character in num
        - Reset the freq to 1
- Append the freq and str of last character into result.
- Return the final result.
    
Time Complexity: O(n) </br>
Space Complexity: O(n)