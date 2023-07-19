# [Serialize and Deserialize Binary Tree](https://www.codingninjas.com/studio/problems/serialize-and-deserialize-binary-tree_8230748?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of integers. You are supposed to serialize and deserialize the given binary tree. Can choose any algorithm to serialize/deserialize the given binary tree.

## Algorithm

### SerializeTree Function
- Performs a level order traversal of the binary tree using a queue. It starts with the root node and traverses each level from left to right, appending the node values to the serialized string. It also appends "#" for NULL nodes.

Time Complexity: O(n)</br>
Space Complexity: O(n) </br>

### DeserializeTree Function
- It reads the serialized string and reconstructs the binary tree level by level. It uses a queue to keep track of nodes to be processed. It reads the node values from the serialized string and creates new nodes for them. It then links the nodes as left and right children based on the order they appear in the serialized string.

Time Complexity: O(n)</br>
Space Complexity: O(n) </br>
