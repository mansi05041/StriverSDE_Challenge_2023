# [Number of Distinct Substring](https://www.codingninjas.com/studio/problems/number-of-distinct-substring_8230842?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a string 'word' containing lowercase English alphabets having length 'n'. Task is to calculate the number of distinct substrings in the 'word'.

## Algorithm
- Create a Node class with an array to links child nodes representing each character of the alphabet(26 lowercase letters).
- Initialize a Trie object with a root node in the constructor.
- Implement the distinctStrings(word) function:
    - Initialize count = 0
    - Start at the root node.
    - Iterates through each character in the string.
        - checks if the current character is already present in the trie. If not, it adds a new node for that character and increments the count.
        - It then moves to the next reference and continues the process.
    - Return the count

Time Complexity: O(n<sup>2</sup>)
