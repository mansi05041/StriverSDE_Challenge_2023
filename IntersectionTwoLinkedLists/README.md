# [Intersection of two linked lists](https://www.codingninjas.com/codestudio/problems/intersection-of-two-linked-lists_8230688?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two singly linked list of integers, which may have an intersection point. Task is to return the first intersection node. If there is no intersection, return NULL.

### Input_output
Input: l1 =  4->1->NULL, l2 = 5->6->NULL, common list = 8->NULL </br>
Output: 8

## Algorithm

### By counting total nodes
- Calculate the lengths of two linked lists let n1 and n2.
- if n1>n2, then adjust the firstHead by moving it forward by n1-n2.
- otherwise adjust secondHead by moving it forward by n2-n1.
- Iterae through both the lists simultaneously. Checl if the current nodes are equal . If they are return the intersection point.
- Move both nodes forward in the loop.
- return NULL, if no intersection point is found.

Time Complexity : O(n+m) </br>
Space Complexity : O(1)

### By detecting loop
- connect the end of 'firstHead' list to the beginning, creating a circular linked list.
- Intialize two pointers slow and fast as 'secondHead'.
- use a loop to advance the 'fast' pointer by two nodes and the 'slow' pointer by one node in each iteration until the fast reched to the end of list.
- if slow==fast , break the loop. after the loop return the interesecting point.
- Return NULL, if not found.

Time Complexity: O(n+m)</br>
Space Complexity: O(1)
