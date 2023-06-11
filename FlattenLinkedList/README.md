# [Flatten a linked list](https://www.codingninjas.com/codestudio/problems/flatten-a-linked-list_8230827?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a linked list containing 'n head' nodes, where every node in the linked list contains two pointers:
- 'next' which points to the next node in the list.
- 'child' pointer to a linked list where the current node is the head.
Each of these child linked lists in sorted order and connected by 'child' pointer. Task is to flatten this linked such that all nodes appear in a single layer or level in a 'sorted order'

## Algorithm
- start with the given 'head' of the linked list.
- if 'head' is NULL or 'head->next' is NULL, return 'head' as it is already flattened.
- store the current 'head' node as 'down'.
- store the next node of 'head' as 'right'.
- set 'down->next' to NULL to disconnect the 'down' part from the original linked list.
- Recursively flatten the 'down' part by calling flattenLinkedList(down) and store the result in downF.
- Recursively flatten the 'right' part by calling flattenLinkedList(right) and store the result in rightF.
- Merge the flattened 'downF' and 'rightF' parts by calling 'mergeLinkedList(downF,rightF)
- return the merged linked list, which is the flattened linked list

Time Complexity: O(nlogn)</br>
Space Complexity: O(log n)
