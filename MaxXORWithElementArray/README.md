# [Maximum XOR with an Element from Array](https://www.codingninjas.com/studio/problems/maximum-xor-with-an-element-from-array_8230839?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array 'arr' consisting of 'n' non-negative integers. Given a list of queries consisting 'm' queries, where the ith query is a list of two non-negative integers xi, ai i.e., querries[i] = [xi,ai]. The answer to the ith querry i.e., querries[i]  is the maximum bitwise xor value of xi with any integer less than or equal to ai in arr.
Return list consisting of n integers where the ith integer is the answer of queries[i].

### Input_output
Input: arr=[6 6 3 5 2 4], queries = [[6 3] [8 1] [12 4]]</br>
Output: [5 -1 15]

## Algorithm

### Naive Approach
- In nested loop find the maximum XOR.

```
function maxXOR(arr,q):
   res = []
   for(i=0 to q.size){
     xi = q[i][0]
     ai = q[i][1]
     maxXOR = -1
     for(j=0 to arr.size){
        if(arr[j]<=ai){
            maxXOR = max(maxXOR,arr[j]^xi)
        }
     }
     res[i] = maxXOR
   }
   return res
```

Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(1)

### Better approach using Trie
- Define Two classes: Node and Trie.
- The Node class represent a node in the trie, which has two pointers (one and zero), representing the child nodes with binary values 1 and 0 respectively.
- The Trie class represents the trie structure and contains root which points to the root node of the trie.
- The insert function in the Trie class is used to insert an interger into the trie. It starts from the root and traverses the binary representation of the given integer from the most signinficant bit to the least signinficant bit. For each bit, it checks if the corresponding child node exits(0 or 1) and creates a new nose if it doesn't. Finally it updates the current node to the child node corresponding to the current bit.
- The findMaxXOR function in the Trie class is used to find the maximum XOR value for a given integer. It starts from the root and traverse the binary representation of the given integer from the most significant bit to the least significant bit. For each bit, it checks if the opposite child node (0 or 1) exists and updates the answer by adding the value of that bit (shifted left by the current position). Finally, it updates the current node to the child node corresponding to the opposite bit.
- The maxXorQueries function takes an input array 'arr' and a vector of queries. If first sorts the input array in ascending order. it then sorts the queries based on the second element in each query in ascending order.
    - The function initializes an empty result vector res.
    - initialize an index = 0 and create a new trie object
    - it iterates through each querry in a sorted one. For each query it retrieves ai,xi and qi.
        - it inserts the numbers from input array arr into the trie until it reaches an element greater than ai. This is done to ensure that the trie contains all the numbers less than or equal to ai.
        - if the index idx is 0, the set res[qi]=-1
        - otherwise set res[qi]=trie.findMaxXor(xi)
    - return res

Time Complexity: O(n+q logn)</br>
Space Complexity: O(q)
<code>n is the size of arr and q is number of queries</code>
