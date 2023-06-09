# [Delete Kth Node From End](https://www.codingninjas.com/codestudio/problems/delete-kth-node-from-end_8230725?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a Singly Linked list and a reference to the node to be deleted. Every node of the linked list has a unique value written on it. Task is to delete that node from the linked list. </br>
- The reference to the head of the linked list is not given.
- The node to be deleted is not a tail node.
- The value of each node in the linked list is unique.
- It is guarantee that the node to be deleted is present in the linked list.

### Input_output
Input: 2->5->7->10->NULL, 7 </br>
Output: 2->5->10->NULL

## Algorithm
- Copy the data from the next node into the given node.
- Store the next node in a temporary pointer 'temp'
- Remove the connection between the given node and the next node by updating the 'next' pointer of the given node to skip the next node and point to the node after it.
- Delete the temp node.

Time Complexity: O(1)</br>
Space Complexity: O(1)
