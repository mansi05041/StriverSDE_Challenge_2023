# [Middle of Linked List](https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_8230764?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a singly linked list of integers. The task is to determine the midddle node of a singly linked list. However, if the list has an even number of nodes, then return the second middle node.

### Input_output
Input: 1->2->3->4->5->6 </br>
Output: 4->5->6

## Algorithm

### Brute force approach
- Traverse the linked list and count the number of nodes(n).
- Iterate through the linked list again, moving n/2 steps from the head of list.
- Return the node at the current position, which will be the middle node.

Time Complexity : O(n)</br>
Space Complexity : O(1)

### Better approach
- Intialize two pointers, slow and fast to the head of linked list.
- Iterate through the linked list until either slow , fast and fast->next becomes NULL.
    - Move slow pointer one step ahead as <code>slow->next</code>
    - Move fast pointer two steps ahead as <code>fast->next->next</code>
- return the slow pointer, which will be pointing to the middle node of the linked list.

Time Complexity : O(n)</br>
Space Complexity : O(1)