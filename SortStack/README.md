# [Sort a Stack](https://www.codingninjas.com/studio/problems/sort-a-stack_8230787?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a stack consisting of "N" integers. Task is to sort this stack in descending order using recursion. 

### Input_output
Input: 5 -2 9 -7 3 </br>
Output: 9 5 3 -2 -7

## Algorithm
- If the stack is empty, return
- Remove the top element 'x' from the stack.
- Recursively sort the remaining elements in the stack.
- Create a temporary stack 'temp'
- Move all the elements greater than 'x' from the original stack to 'temp'.
- Push 'x' back into the original stack.
- Move all the elements from 'temp' back to the original stack.

Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(n)
