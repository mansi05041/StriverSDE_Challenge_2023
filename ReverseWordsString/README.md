# [Reverse Words in a String](https://www.codingninjas.com/studio/problems/reverse-words-in-a-string_8230698?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a string of length 'n'. you need to reverse the string word by word.

### Input_output
Input: str = "Welcome to  Coding Ninjas" </br>
Output: "Ninjas Coding to Welcome"

## Algorithm
- create an empty stack of strings.
- Iterate over each character in the input string 'str' using a loop. 
- Inside the loop, intialize an empty string variable 'word' to store a word from the input string.
- while the current character is not a space and the index 'i' is within the bounds of the string:
    - append the current character to word.
    - increment the index 'i'
- If the word is not empty(to handle consecutive spaces), push it onto the stack 'st'.
- After iterating through the entire input string, create an empty string res to store the reversed string.
- While the stack is not empty
    - Append the top element of the stack to res, followed by a space.
    - pop the top element from the stack.
- Return the reversed string

Time Complexity : O(n)</br>
Space Complexity : O(n)
