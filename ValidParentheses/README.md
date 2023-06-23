# [Valid Parentheses](https://www.codingninjas.com/studio/problems/valid-parentheses_8230714?challengeSlug=striver-sde-challenge)

## Table of contents

- [Question](#question)
- [Input-Output](#input-output)
- [Algorithm](#algorithm)

## Question
You are given string 'str' consisting soley of "{","}","(",")","{","}". Determine whether the parentheses are balanced.

## input-output
Input: [()]{}{[()()]()} </br>
Output: yes

## Algorithm
- Create an empty stack of characters.
- Iterate through each character 's' in the expression.
    - if the stack is empty, push the character 's' onto the stack.
    - if the character is a closing parenthesis, and the top of the stack contains the corresponding opening parenthesis, pop the top element from the stack.
    - otherwise, push that character onto the stack.
- After the iteration is complete, if the stack is empty, return true; otherwise, return false.

Time Complexity: O(n) </br>
Space Complexity: O(n)