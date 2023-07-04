# [Complete String](https://www.codingninjas.com/studio/problems/complete-string_8230849?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Find the longest complete string in the array. If there are multiple strings return with the same length, return the lexixographically smallest one and if no string exists, return "None".

## Algorithm
- Create a Node class with an array to links child nodes representing each character of the alphabet(26 lowercase letters).
- Include a boolean flag in each Node to mark the end of a word.
- Initialize a Trie object with a root node in the constructor.
- Implement the insert(word) function:
    - Start at the root node.
    - For each character in the word:
        - Check if the character exists as a chid node under the current node.
        - If not, create a new node for the character and link it to the current node.
        - Move to the next word.
    - After iterating through all characters in the word, set the flag of the last node to indicate the end of a word.
- Implement the checkIfPrefixExists(word) function:
    - Start at the root node.
    - Iterate through each character of the word/prefix.
    - check if the current character is present as a child node. if not, return false.
    - Move to the child node corresponding to the current character.
    - Move to the child node corresponding to the current character.
    - Continue until all characters of the word/prefix. 
    - Return 'true' if all characters are found and the last node's flag is 'true', indicating the prefix exists.
- Implementing the completeString function, create a trie and insert all the given words into it.
- Iterate through each word in the given vector and check if it exists as prefix in the trie using the 'checkIfPrefixExists' function.
- keep the track of the longest word/prefix found so far.
- Finally, return the longest word/prefix or "None" if no prefix is found

Time Complexity: O(n*m) </br>
The time complexity depends on the number of word 'n' and the average length of the words 'm'.
