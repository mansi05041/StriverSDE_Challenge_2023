# [Reverse Nodes in K-group](https://www.codingninjas.com/codestudio/problems/reverse-nodes-in-k-group_8230709?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a singly linked list and array 'B' of size 'n'. Each element in the array 'B' represents a block size. Modify the linked list by reversing thr nodes in each block whose sizes are given by the array 'B'
- if encounter a situtation when B[i] is greater than the number of remaining nodes in the list, then simply reverse the remaining nodes as a block and ignore all the block sizes from B[i]
- All the block sizes are contiguous

### Input_output
Input: list = 1->2->3->4->5->6->7->8->9->10->11->NULL, b[]= [2,3,4] </br>
Output: 2->1->5->4->3->9->8->7->6->10->11->NULL

## Algorithm
- check if the head is null, if so return null.
- call the reverse function with the head pointer, array b, the intial index 0 and n as parameter.
- return the linked list from the reverse function

#### Reverse function
- check the base case , if head is null or there is only one node or n<1 then return head.
- Intialize curr as head, nextPtr and prev as null. Initialize count as 0.
- Find the next non-zero group size in the array 'b' starting from the current index 'idx'
- use a loop to reverse the next b[idx] nodes
    - set nextPtr = curr->next
    - set curr->next = prev
    - set prev = curr
    - set curr = nextPtr
    - increment count by 1
- if idx>n and curr is not null, return head
- if curr is not null, set the head->next = reverse(nextPtr,b,idx+1,n)
- return prev, which is the head of the reversed group.

Time Complexity : O(n)</br>
Space Complexity : O(n)
