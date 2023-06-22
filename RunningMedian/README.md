# [Running Median](https://www.codingninjas.com/studio/problems/running-median_8230682?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a stream of N integers. For every ith integer added to th integer added to the running list of integers, print the resulting median. Print only the integer part of the median.

### Input_output
Input: arr = [6 2 1 3 7 5] </br>
Output: [6 4 2 2 3 4]

## Algorithm

### Naive Approach
- push the newly add number in an array, say 'a'
- sort the array a
- print the median for that iteration

Time Complexity : O(n<sup>2</sup>logn)</br>
Space Complexity : O(1)

### Better approach using heaps
- create an empty max heap and min heap.
- For each element in the array:
    - insert the element into the appropriate heap based on the following conditions.
        - if the max heap is empty or the element is less than or equal to the top element of the max heap, insert it into the max heap.
        - otherwise insert it into the min heap.
    - balance the heaps if necessary.
        - if the size of the max heap is greater than the size of min heap +1 , remove the top element from the max heap and insert it into the min heap.
        - if the size of min heap is greater than the size of max heap, remove the top element from the min heap and insert it into the max heap.
    - calculate and print the current median based on the sizes of the heaps.
        - if the sizes of the heaps are equal, the median is the average of the top elements of both heaps.
        - otherwise, the median is the top element of the max heap.

Time Complexity : O(nlogn)</br>
Space Complexity : O(n)