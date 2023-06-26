# [Queue using Stack](https://www.codingninjas.com/studio/problems/day-25-queue-using-stack_8230722?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Implement a Queue Data Structure which follows FIFO (First In First Out) property, using only the instances of the stack data structure.
- Constructor : It initializes the data members as required.
- enqueue(data) : This function should take one argument of type integer. It enqueues the element into the queue.
- dequeue() : It removes the element from the front of the queue and returns the element being removed. If queue is empty then returns -1.
- peek() : It returns the element being kept at the front. If queue is empty then return -1.
- isEmpty() : It returns a boolean value indicating whether the queue is empty or not.

## Algorithm
- Two stacks will be use (st1 and st2). The stack st1 acts as the end of the queue, and st2 acts as the front of the queue.
- enQueue function:
    - push the value onto st1(end of the queue)
- deQueue function:
    - removes the element from the front of the queue. 
    - calls the peek() function to retrieve the front element and removes it from st2.
- peek function:
    - return the front element of the queue without removing it.
    - if st2 is empty, transfers all elements from st1 to st2 by popping from st1 and pushing onto st2.
    - return the top of st2.
- isEmpty function:
    - checks whether both st1 and st2 are empty.
    
- Each operation takes O(1) time complexity
- Space complexity is O(n) to store n elements


