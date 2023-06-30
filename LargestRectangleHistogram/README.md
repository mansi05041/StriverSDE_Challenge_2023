# [Largest Rectangle in Histogram](https://www.codingninjas.com/studio/problems/largest-rectangle-in-a-histogram_8230792?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array 'heights' of length 'n'. 'heights' represents the histogram and each elements of heights represents the height of the histogram bar. consider that the width of the each histogram is 1. Task is to return the area of largest rectangle possible in the given histogram.

### Input_output
Input: [2 1 5 6 2 3], k=3</br>
Output: 10 </br>

## Algorithm

### Naive approach
- Initialize max Area to 0
- Iterate over each index from 0 to n-1:
    - find the just smaller height in the left.
    - find the just smaller height in the right.
    - calculate the current area as (minR-minL-1)*arr[i]
    - update the maxArea

Time Complexity: O(n<sup>2</sup>)</br>
Space Complexity: O(1)


### better approach using stack
- Initialize variables: n as the size of the input vector, nextSmaller and prevSmaller and an empty stack st.
- Iterate over the elements of the input vector from left to the right and find the previous smaller elments for each elements in input array using stack.
- Empty the stack
- Iterate over the elements of the input vector from right to the left and find the next smaller elments for each elements in input array using stack.
- Intialize maxArea to 0
- Iterate over the elements of the input vector
    - calculate the current area as (nextSmaller[i]-prevSmaller[i]-1)*heights[i]
    - update maxArea if the current area is greater.
- Return the maxArea as the result

Time Complexity: O(n)</br>
Space Complexity: O(n)