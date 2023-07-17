# [Connect Nodes at Same Level](https://www.codingninjas.com/studio/problems/connect-nodes-at-same-level_8230790?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
A Binary tree is a tree where each node has at most two children. task is to connect all the adjacent nodes at the same level in the given binary tree.

## Algorithm
- Initialize an empty queue, to store the nodes of the binary tree.
- Push the root node into the queue.
- Perform a level order traversal of the binary tree using the queue.
    - Get the current size of the queue, qSize which represents the number of nodes at the current level.
    - Iterate qSize times to process all the nodes at the current level
        - Pop the front node from the queue.
        - set the next pointer of the node to the front element of the queue(if exists), otherwise set it to NULL.
        - If the node has a left child, push it into the queue.
        - If the node has a right child, push it into the queue.

Time Complexity: O(n)</br>
Space Complexity: O(m) - m is the maximum number of nodes at any level in the binary tree.