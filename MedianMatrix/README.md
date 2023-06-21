# [Matrix Median](https://www.codingninjas.com/studio/problems/matrix-median_8230735?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a matrix of n rows and m columns filled up with integers where every row is sorted in non-decreasing order. The task is to find the overall median of the matrix.

### Input_output
Input: [ [1 2 6 6 10] [2 4 4 5 7][2 5 5 6 6] ] </br>
Output: 5

## Algorithm

### Naive Approach
- Flatten the matrix into single array.
- Sort that array
- return the median

Time Complexity : O(n logn)</br>
Space Complexity : O(1)

### better approach (binary search)
- Intialize low to 1 and high to 10^5, representing the lower and upper bounds for the binary search.
- Get the number of rows and columns in the matrix.
- Repeat the following steps untill low<=high:
    - calculate the middle value 'mid', as the average of low and high.
    -  Initialize a variable count to 0, which hold the total count of elements in the matrix that are less than or equal to 'mid'.
    - Iterate over each row in the matrix to count the elements that are less than or equal to mid.
    - check if count is greater than (n*m)/2, if true update low to mid+1 to search in the upper half of the range.
    - otherwise update high to mid-1, to search in the lower half of the range.
    - return low, represents the median of the matrix.
Time Complexity: O(n*log(max value))</br>
Space Complexity: O(1)
