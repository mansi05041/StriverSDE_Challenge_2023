# [Add Two Numbers](https://www.codingninjas.com/codestudio/problems/add-two-numbers-as-linked-lists_8230833?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given two non-negative numbers num1 and num2 represented in the form of linked list.
The digits in the linked lists are sorted in the reverse order. Calculate the sum of the two numbers and return the head of the sum list.

### Input_output
Input: num1= 1->2->3->NULL, num2= 4->5->6->NULL </br>
Output: 5->7->9->NULL </br>
Explaination: num1 represents the number 321 and num2 represents 654. Their sum is 975.

## Algorithm
- Since the linked lists are already sorted.
- Initialize carry =0, ans=0.
- Initialize head pointer and prev pointer with NULL value.
- Repeat the following steps until (num1 || num2 || carry)
    - if num1 is not null, then store the data in val1 and move num1 forward.
    - if num2 is not null, then store the data in val2 and move num2 forward.
    - calculate the ans as <code>ans = val1+val2+carry </code>
    - update the carry as <code>carry = ans/10</code>
    - update the ans as <code>ans = ans%10</code>
    - create a new node with ans as data
    - append the new node at the back of head.
- return head

Time Complexity: O(n)</br>
Space Complexity: O(n)
