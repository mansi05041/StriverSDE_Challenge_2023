# [Merge Two Sorted Linked Lists](https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_8230729?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given two sorted linked lists. You have to merge them to produce a combined sorted linked list. 

### Input_output
Input: l1 = 1->4->5, l2 = 2->3->5 </br>
Output: 1->2->3->4->5->5 

## Algorithm
- Handle the base case: if either 'first' or 'second' is NULL, return the other list as the result.
- Intialize two pointers 'head' and 'tail' as NULL.
- Compare the data of the first nodes of 'first' and 'second' lists. Set head and tail to the node with smaller data value. Move the corresponding pointer to its next node.
- Traverse both lists simultaneously using a loop while both 'first' and 'second' are not NULL.
    - if the data of the current node in 'first' is smaller, append it to the tail->next and move the 'first' pointer to the next node.
    - otherwise append current node in 'second' to the 'tail->next' and move the 'second' pointer to the next node.
    - update the 'tail' pointer to the newly appended node.
- After the loop, if there are remaining nodes in either 'first' or 'second' append them to the tail->next.
- Return the 'head'.

Time Complexity: O(n)</br>
Space Complexity: O(1)

