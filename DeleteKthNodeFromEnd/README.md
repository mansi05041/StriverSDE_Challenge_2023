# [Delete Kth Node From End](https://www.codingninjas.com/codestudio/problems/delete-kth-node-from-end_8230725?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a Singly Linked list of N nodes with integer data and an integer "K". Task is to remove the Kth node from the end of the given linked list and return the head of the modified linked list.

### Input_output
Input: 1->2->3->4->NULL, K=2 </br>
Output: 1->2->4->NULL

## Algorithm

### Naive Approach
- Count the total nodes in linked list , say n.
- Iterate to n-K nodes, remove the connection.
- return the head of modified linked list

Time Complexity : O(n)</br>
Space Complexity : O(1)

### Better approach
- Create a dummy node and set its next pointer to the head of the given linked list. This dummy node helps handle the case where the head needs to be removed.
- Initialize two pointers, slow and fast both pointing to the dummy node.
- Move the fast pointer K steps forward in the linked list.
- Move both the slow and fast pointers one step at a time until the fast pointer reaches the last node. At this point, the slow will be pointing to the (K+1)th node from the end.
- Remove the Kth node by updating the next pointer of the slow pointer to skip the Kth node.
- Return the next pointer of the dummy node, which will be modified the head of the linked list.

Time Complexity: O(n)</br>
Space Complexity: O(1)
