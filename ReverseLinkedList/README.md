# [Reverse Linked List](https://www.codingninjas.com/codestudio/problems/reverse-linked-list_8230724?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a singly linked list of integers. The task is to return the head of the reversed linked list.

### Input_output
Input: 10->21->3->2->4->-1 </br>
Output: 4->2->3->21->10->-1

## Algorithm
- Initialize three pointers 'curr', 'prev' and 'nextPtr'.
- set curr=head and prev=NULL
- Iterate over the linked list while curr is not NULL
    - Set nextPtr = curr->next
    - update the next pointer of curr such that <code>curr-next=prev</code>
    - Move prev to curr
    - Move curr to nextPtr to continue iterating.
- After the iteration, prev will be pointing to the last node of the original linked list, which becomes the new head of the reversed linked list.
- return prev

Time Complexity : O(n)</br>
Space Complexity : O(1)
