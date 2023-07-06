# [Longest Common Prefix](https://www.codingninjas.com/studio/problems/longest-common-prefix_8230847?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of strings 'arr' containing N elements. Task is to return the longest common prefix among all these strings. If there is no common prefix, return an empty string.

### Input_output
Input: [coding codezen codingninja coder] </br>
Output: cod

## Algorithm

### Approach using comparision
- Initialize the empty string , say answer.
- Compare the each character of first string with remaining strings.
- if they all match add to the answer, otherwise break the loop.
- return the answer.

Time Complexity : O(n*m)</br>
Space Complexity : O(1)

### Approach using trie
- Define a node class representing the node in the Trie. Each node contains an array of links, representing the child nodes for each character 'a' to 'z', a childCount to keep track of the number of children, and a boolean flag 'end' indicating if the node represents the end of a word.
- Define a Trie class representing the Trie data structure. It contains a root node which is initialized in the constructor.
- Implement the insert function in the trie class. It takes a word as input and inserts each character of the word into the trie. If a character is not already present, a new node is created and linked to the current node. The childCount is incremented for each insertion. At the end of the word, the end flag is set to true.
- Implement getPrefix in the trie class. It takes a string str and an empty string ans as input. starting from the root node, iterate through each character in str. If the current node has a childCount of 1, append the character to 'ans' and move to the next node using the get function. If the childCount is nor 1, break the loop. If the node represents the end of a word, break the loop as well.
- Implement the longestCommonPrefix function. Create a trie object. Insert all the strings from the input vector into the trie. Take the first string from the vector and Initialize an empty string ans. Call the getPrefix function.
- Return the ans string

Time Complexity: O(n*m)</br>

<code>n is the number of strings and m is the average length</code>