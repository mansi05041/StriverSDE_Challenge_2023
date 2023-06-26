# [LRU Cache Implementation](https://www.codingninjas.com/studio/problems/lru-cache-implementation_8230697?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Design and implement a data structure for Least Recently Used (LRU) cache to support the following operations:
- get(key)- Return the value of the key if the key exists in the cache, otherwise return -1.
- put(key,value) - Insert the value in the cache if the key is not already present or update the value of the given key if the key is already present. When the cache reaches its capacity, it should invalidate the least recently used item before inserting the new item.

## Algorithm
- Create a Node class to represent a node in the doubly linked list. Each node contains a key, value, a pointer to the previous node and a pointer to the next node.
- In the LRUCache constructor, intialize the cache size and create dummy head and tail nodes for the doubly linked list.
- Implement the addNode function to add a new node after the head node in the doubly linked list.
- Implement the delNode function to delete a given node from the doubly linked list.
- Implement the get function to retrieve the value associated with a given key from the cache. If the key is present, move the corresponding node to the front of the cache to indicate it was recently used. update the mapping in the map and return the value. If the key is not present, return -1.
- Implement the put function to insert or update a key-value pair in the cache. If the key is already present, delete the corresponding node, update the mapping and add a new node with the updated value at the front of the cache. If the cache is full, delete the least recently used node, update the mapping and add a new node with the given key-value pair at the front of the cache.

Time Complexity: O(1)</br>
Space Complexity: O(capacity)
