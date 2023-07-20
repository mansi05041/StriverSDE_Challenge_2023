# [Median in a Stream](https://www.codingninjas.com/studio/problems/median-in-a-stream_8230765?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given that integers are read from a data stream. Your task is to find the median of the elements read so far.

### Input_output
Input: [1 2 3] </br>
Output: [1 1 2]

## Algorithm

### Naive Approach
- create an empty vector 'sortedArr' to store all the numbers seen so far.
- create an empty vector ans to store the medians
- for each element in the input array 'arr'
    - Add the element to 'sortedArr'
    - sort the 'sortedArr'
    - calculate the median of 'sortedArr'
    - store the median in the ans vector.
- return ans vector

Time Complexity: O(n<sup>2</sup> logn)</br>
Space Complexity: O(n)

### Optimized approach using Heap
- Create two heaps, maxHeap and minHeap
- For each element in the input array 'arr'
    - insert the element into the appropriate heap based on its value.
    - Rebalance the heaps to maintain the property that the difference in the sizes of heaps is atmost 1.
    - calculate the median using the top elements from the heaps and store it in the ans vector.
- return the ans vector

Time Complexity: O(nlogn)</br>
Space Complexity: O(n)
