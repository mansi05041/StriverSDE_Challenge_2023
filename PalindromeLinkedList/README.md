# [Palindrome Linked list](https://www.codingninjas.com/codestudio/problems/palindrome-linked-list_8230717?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a singly linked list of integers. Task is to return true if the given singly linked list is a palindrome otherwise return false.

### Input_output
Input: 1->2->1->NULL </br>
Output: True

## Algorithm
- If the linked list is empty or contains single node, return true.
- find the middle node.
- reverse the half linked list from the middle node to end.
- compare the linked list at both ends, if the data at both current node is not same, return false.
- return true, that means the given linked list is palindrome.

Time Complexity : O(n)</br>
Space Complexity : O(1)
