# [K-th Largest Element in a Stream](https://www.codingninjas.com/studio/problems/kth-largest-element-in-a-stream_8230728?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a stream of numbers, and need to find the kth largest number in the stream at any given time. As the stream of numbers can't be given during compile time , so need to design a data structure which can accept the infinite numbers and can return the Kth largest at any given time.

## Algorithm
- using min Heap store the elements.
- the size of min heap will always be equal to k, on exceeding remove the top element.
- the Kth largest element at any given time is always the top of min heap

Time Complexity: O(nlogk)</br>
Space Complexity: O(k)