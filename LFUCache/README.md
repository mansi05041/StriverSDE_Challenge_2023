# [LFU Cache Implementation](https://www.codingninjas.com/studio/problems/lfu-cache_8230851?challengeSlug=striver-sde-challenge)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Design and implement a data structure for Least Frequency Used (LFU) cache to support the following operations:
- get(key)- Return the value of the key if the key exists in the cache, otherwise return -1.
- put(key,value) - Insert the value in the cache if the key is not already present or update the value of the given key if the key is already present. When the cache reaches its capacity, it should invalidate the least frequency used item before inserting the new item. If multiple elements have the least frequency then we remove the element which was least recently used.

## Algorithm
- Create a Node class to represent a node in the doubly linked list. Each node contains a key, value, count(frequency), a pointer to the previous node and a pointer to the next node.
- Create a class called LinkedList to represent a linked list of nodes. It has a head, tail and size.
- Create a class LFUCache to implement the LFU cache. It has unordered maps to store key-node and frequency-linked list pairs, maxCacheSize, currentSize and minFreq.
- In the LFUCache constructor, intialize the cache with the given capacity.
- Implement the get function
    - If the key is present in the keyNode map, retrieve the corresponding node.
    - Update the node's count(frequency) and move it to the appropriate position in the linked list.
    - return the value of the node, if not found then return -1. 
- Implement the put function
    - If the cache size is 0, return
    - If the key is already present in the cache, update its value, update its count and move it to the appropriate position in the linked list.
    - If the cache is full, remove the least frequency used node from the linked list and keyNode map.
    - create a new node with the given key and value, set its count to 1, and add it to the linked list and keyNode map.
    - update the minFreq if necessary.
- Implement the updateLinkedList function
    - Remove the node from the keyNode map and its corresponding frequency linked list.
    - If the frequency linked list becomes empty and its count is the same as minFreq, update the minFreq.
    - create a new frequency linked list if the next higher frequency already exists.
    - Increase the count of the node by 1.
    - Add the node to the front of the next higher linked list.
    - update the keyNode map and freqNode map.
    
Time Complexity: O(1)</br>
Space Complexity: O(capacity)
