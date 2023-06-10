# [LinkedListCycleII](https://www.codingninjas.com/codestudio/problems/linked-list-cycle-ii_8230823?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given a singly linked list that may or may not contains a cycle. Return the node where a cycle begins. If a cycle exits, else return NULL.

### Input_output
Input: 1->2->3->4->2  </br>
Output: 2

## Algorithm

### Naive approach
- using set, find the starting node of cycle in linked list.
```
function Node* findLoopStart(Node* head):
    visitedSet = empty Set
    currentNode = head

    while currentNode is not NULL:
        if currentNode is present in visitedSet:
            return currentNode
        else:
            add currentNode to visitedSet
            currentNode = currentNode->next
    
    return NULL
```

Time Complexity: O(n)</br>
Space Complexity: O(n)

### Better approach
- Initialize slow and fast pointer to head.
- Iterate through the linked list until either fast->next or fast->next->next reaches to end.
- In loop move fast by two pointers ahead whereas move slow by one pointer. if slow and fast are equals then:
    - Reset the fast pointer to the head of the linked list.
    - Move both the slow and fast pointers one node at a time until they meet again.
    - The meeting point is the start of loop, return the meeting point.
- After loop return NULL.

Time Complexity: O(n)</br>
Space Complexity: O(1)
