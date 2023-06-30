# [Implement Atoi Function](https://www.codingninjas.com/studio/problems/implement-atoi-function_8230776?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a string 'str' of length 'n'. Implement the atoi function. If there are no numbers in the string, return 0.

### Input_output
Input: "123456" </br>
Output: 123456

## Algorithm
- Initialize a variable 'ans' to store the converted integer and set it to 0.
- Iterate over each character 'x' in the input string 'str'.
    - if 'x' is a digit('0' to '9'), multiply ans by 10 and add the numeric value of x ('0' to '9') to ans.
- if the first character of the string is '-', multiply ans by -1 to handle negative numbers.
- return the final 'ans' as the converted integer.

Time Complexity: O(n)</br>
Space Complexity: O(1)
