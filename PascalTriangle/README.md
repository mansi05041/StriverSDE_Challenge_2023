# [Pascal's Triangle](https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an integer N, return a 2D array list contaning the pascal's triangle till the row N.

### Input_output
Input: N= 4 </br>
Output: [[1][1,1][1,2,1],[1,3,3,1]]

## Algorithm
- create an empty vector of vector 'pascal' to store the rows of pascal triangle.
- iterate over i from 1 to n(inclusive) to generate each row, call generateRow function that takes 'i' as input to generate the ith row. push the generated row into pascal.
- In generateRow function:
    - intialize ans to 1, this will hold the current value of each element in the row.
    - Create an empty vector 'ansRow' to store the row elements.
    - iterate over 'col' from 1 to 'row-1' to calculate the remaining elements in the row.
    - in loop update ans by multiplying it with (row-col) and dividing it by col. This calculates the binomial coefficient for each element in the row, then push ans into ansRow.
    - Return ansRow as generated row.
- Return pascal as result.

Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(n)

<code>n: number of rows </code>