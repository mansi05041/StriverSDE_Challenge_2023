# [Min Heap](https://www.codingninjas.com/studio/problems/min-heap_8230863?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Implement the Min Heap data structure. Given 2 types of queries:
- 0 X : Insert X in the heap.
- 1 : Print the minimum element fromm the heap and remove it.

## Algorithm
- create a priority queue to store elements in ascending order, such that minimum element will be present in top.
- Initialize a vector to store the removed elements.
- Iterate over the queries:
    - if it[0]=0 then push the element into queue.
    - oterwise if it[0]=1 then, push the minimum element from queue to the vector and then remove that element form queue.

Time Complexity: O(qlogn)</br>
Space Complexity: O(n+p) </br>

<code> q: number of queries </br>
n: maximum number of elements in the priority queue </br>
p: the number of elements to be printed</code>
