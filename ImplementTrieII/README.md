# [Implement Trie II](https://www.codingninjas.com/studio/problems/implement-trie-ll_8230840?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Implement Trie Data Structure to support these operations:
- Trie() - Initialize the object of this "TRIE" data structure.
- insert(word) - To insert a string "word" in Trie 
- countWordsEqualTo(word) - To return how many times this "word" is present in this "TRIE"
- countWordsStartingWith(prefix) - To return how many words are there in this "TRIE" that have the string prefix.
- erase(word) - To delete one occurence of the string "word" from the TRIE.

## Algorithm
- Trie Construction:
    - Initialize an empty root node with no end or prefix count.
- Insertion:
    - Traverse the Trie by iterating over each character in the given word. If a character is not present in the current node's links, create a new node and link it. Move the reference to the next node and increment the prefix count. Finally, increment the end count.
- Count Words Equal to 
    - Traverse the Trie by iterating over each character in the given word. If a character is not present in the current node's links, return 0(no matching word found). If the traversal reaches the end of the word, return the end count of the last node.
- Count words Starting with 
    - Traverse the Trie by iterating over each character in the given word. If a character is not present in the current node's link, return 0(no matching prefix found). If the traversal reaches the end of the word, return the prefix count of the last node.
- Erase
    - Traverse the Trie by iterating over each character in the given word. If a character is not present in the current node's links, return (no matching found). Move the reference to the next node and decrement the prefix count. Finally, decrement the end count.

Time Complexity: O(L)
Space Complexity: O(1)

<code> L : length of the word </code> 
