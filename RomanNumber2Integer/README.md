# [Roman Numeral to Integer](https://www.codingninjas.com/studio/problems/roman-numeral-to-integer_8230780?challengeSlug=striver-sde-challenge)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a string that represents a roman number. Convert the roman number to an integer and return it.

### Input_output
Input: III </br>
Output: 3

## Algorithm
- Initialize map 'mp' that maps each roman numeral character to its corresponding integer. 
- Get the size of the input string 's' and initialize a variable 'result' to store the final integer value.
- set result to the integer value of the last character of s using map.
- Iterate from the second last character to first character:
    - if the integer value of the current character is less than the integer value of the next character, subtract the integer value of the current character from result.
    - otherwise, add the integer value of the current character to the result.
- Return the final value of result.

Time Complexity: O(n)</br>
Space Complexity: O(1)
