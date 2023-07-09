# [Maximum XOR of two numbers in an Array](https://www.codingninjas.com/studio/problems/maximum-xor-of-two-numbers-in-an-array_8230852?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of length N, consisting of integers. Find the maximum XOR such that two indexes x and y such that x<=y.

### Input_output
Input: [2 1 4] </br>
Output: 6

## Algorithm

### Naive Approach
- In nested loop find the maximum XOR.

```
function maxXOR(arr):
   // edge case
   if(arr.size()==1) return 0

   n = arr.size()
   maxXor = 0

   for(i=0 to n):
    for(j=i+1 to n):
        maxXor = max(maxXor,A[i]^A[j])

   return maxXor 

```

Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(1)

### Better approach using Trie
- Define Two classes: Node and TrieNode.
- The Node class represent a node in the trie, which has two pointers (one and zero), representing the child nodes with binary values 1 and 0 respectively.
- The TrieNode class represents the trie structure and contains root which points to the root node of the trie.
- The insert function in the TrieNode class is used to insert an interger into the trie. It starts from the root and traverses the binary representation of the given integer from the most signinficant bit to the least signinficant bit. For each bit, it checks if the corresponding child node exits(0 or 1) and creates a new nose if it doesn't. Finally it updates the current node to the child node corresponding to the current bit.
- The findMaxXOR function in the TrieNode class is used to find the maximum XOR value for a given integer. It starts from the root and traverse the binary representation of the given integer from the most significant bit to the least significant bit. For each bit, it checks if the opposite child node (0 or 1) exists and updates the answer by adding the value of that bit (shifted left by the current position). Finally, it updates the current node to the child node corresponding to the opposite bit.

Time Complexity: O(n*m)</br>
Space Complexity: O(n*m)
<code>m is the maximum bits required to represent any integer</code>
