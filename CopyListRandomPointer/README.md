# [Copy List with Random Pointer](https://www.codingninjas.com/codestudio/problems/copy-list-with-random-pointer_8230734?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a linked list having two pointers in each node. The firt one points to the next node of the list, however the other pointer is random and can point to any node of the list or null. The task is to create a deep copy of the given linked list and return its head.

## Algorithm
- Insert additional node after every node with the same value of current node.
- adjust the random pointer of the newly added nodes.
- seperate the original list and cloned list.
- return the head of the cloned linked list

Time Complexity: O(n)</br>
Space Complexity: O(1)
