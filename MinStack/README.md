# [Min Stack](https://www.codingninjas.com/studio/problems/min-stack_8230861?challengeSlug=striver-sde-challenge)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

## Algorithm
- Declare a stack in pairs such that first element of the pair represents the value, and the second represents the minimum value up to that point.
- Implementation of push function:
    - if the stack is empty, then push {num,num} onto the stack. Here num is both the value and the minimum value since it is the only element in the stack.
    - if the stack is not empty, compare 'num' with the second element of top pair. if num>s.top().second then, push {num,s.top().second} onto the stack. Otherwise push a pair {num,num} onto the stack.
- Implement the pop function:
    - if the stack is empty, return -1
    - otherwise store the top pair, pop the top element from the stack and return the value stored in the top pair.
- Implement the top function:
    - if the stack is empty, return -1.
    - otherwise, return s.top().first.
- Implement the getMin function:
    - if the stack is empty, return -1.
    - otherwise, return s.top().second (the minimum value stored up to so far)

Time Complexity: O(1)</br>
Space Complexity: O(1)

