# [Implement Trie](https://www.codingninjas.com/studio/problems/implement-trie_8230696?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Implement Trie Data Structure to support these operations:
- Insert(word) - To insert a string "word" in Trie 
- search(word) - To check if string "word" is present in Trie or not.
- startsWith(word) - To check if there is any string in the Trie that starts with the given prefix string "word".

## Algorithm
- Create a TrieNode class with an array to links child nodes representing each character of the alphabet(26 lowercase letters).
- Include a boolean flag in each TrieNode to mark the end of a word.
- Initialize a Trie object with a root node in the constructor.
- Implement the insert(word) function:
    - Start at the root node.
    - For each character in the word:
        - Check if the character exists as a chid node under the current node.
        - If not, create a new node for the character and link it to the current node.
        - Move to the next word.
    - After iterating through all characters in the word, set the flag of the last node to indicate the end of a word.
- Implement the search(word) function:
    - Start at the root node.
    - For each character in the word.
        - Check if the character exists as a child node under the current node.
        - If not, the word is not present in the trie, so return false.
        - Move to the next node.
    - After iterating through all characters in the word, check the flag of the last node.
        - If the flag is set, the word is present in the trie, so return true.
        - Otherwise, the word is not stored as a complete word in the trie, so return false.
- Implement the startsWith(prefix) function:
    - Start at the root node.
    - For each character in the prefix:
        - check if the character exists as a child node under the current node.
        - If not, the prefix is not a prefix of any word in the trie, so return false.
        - Move to the next node.
    - After iterating through all characters in the prefix, return true since the prefix is present.

### Time Complexity
- Insertion: O(L)
- Search: O(L)
- Prefix Matching: O(P)

### Space Complexity
O(N*M) </br>

<code> L : length of the word </br>
P : length of the prefix </code> 
