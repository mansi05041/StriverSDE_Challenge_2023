# [Zig Zag Traversal](https://www.codingninjas.com/studio/problems/binary-tree-zigzag-traversal_8230796?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of 'n' nodes, where the nodes have integer values. Task is to print the zigzag traversal of the given binary tree.

## Algorithm
- Create an empty vector 'res' to store the result.
- If the root is null, return an empty vector.
- Create a boolean variable 'isOdd' and set it to 'true'. This will help to determine the direction of traversal.
- Create an empty queue 'q' to perform the level order traversal.
- Push the 'root' node into the queue.
- While the queue is not empty, do the following:
    - Get the current size of the queue and store it in qSize.
    - Create an empty vector 'temp' to store the elements of the current level.
    - Iterate 'qSize' times and do the following:
        - Remove the front node from the queue and store it in 'node'.
        - Add the node->data to the 'temp' vector
        - If the left child of node exists, push it into the queue.
        - If the right child of node exists, push it into the queue.
    - If 'isOdd' is false, reverse the temp vector to alternate the direction of traversal.
    - Append the elements of 'temp' to the 'res' vector.
    - Flip the value of 'isOdd' by neglecting it.
- Return the 'res' vector, which contains the zigzag traversal of the binary tree.

Time Complexity: O(n)</br>
Space Complexity: O(m)

<code>m: maximum number of nodes at any level of the binary tree.</code>

