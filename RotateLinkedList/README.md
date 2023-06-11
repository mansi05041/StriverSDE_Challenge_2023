# [Rotate Linked List](https://www.codingninjas.com/codestudio/problems/rotate-linked-list_8230752?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a linked list having 'n' nodes and an integer 'k'. Task is to rotate the linked list to the right by 'k' positions.

### Input_output
Input: linked list = 1->2->3->4, k=2 </br>
Output: 3->4->1->2

## Algorithm
- Check if k is 0 or head is null. If so, return head as no rotation is needed.
- Find the total number of nodes in the linked list, say 'n'
- update the k to its equivalent rotation in the clockwise direction as <code>k=k%n</code>
- if k is now 0, return the head as no rotation is needed.
- Calculate the number of steps to rotate by subtracting k from the total number of nodes.
- Traverse the linked list using a loop and move curr pointer to the (steps)th node from the beginning.
- set ptr as the next node (K+1)th node.
- break the connection by setting curr->next = NULL
- Traverse to the end of the list using curr pointer.
- connect the end of the list with the head of the original list.
- return the ptr as the new head of the rotated linked list.

Time Complexity : O(n)</br>
Space Complexity : O(1)
