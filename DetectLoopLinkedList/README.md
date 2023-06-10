# [Cycle Detection in a Singly linked list](https://www.codingninjas.com/codestudio/problems/cycle-detection-in-a-singly-linked-list_8230683?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given a singly linked list of integers. Return true if it has a cycle, else return false.

### Input_output
Input: 1->2->3->4->2  </br>
Output: YES

## Algorithm
- Initialize slow and fast pointer to head.
- Iterate through the linked list until either slow , fast or fast->next reaches to end.
- In loop move fast by two pointers ahead whereas move slow by one pointer. if slow and fast are equals then return true.
- After loop return false, as no cycle is detect.

Time Complexity: O(n)</br>
Space Complexity: O(1)
