# [Merge Intervals](https://www.codingninjas.com/codestudio/problems/merge-intervals_8230700?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
given N number of intervals, where each interval contains two integers denoting the start time and the end time for the interval.
The task is to merge all the overlapping intervals and return the list of merged intervals sorted by increasing order of their start time.

### Input_output
Input: [[1 4] [3 5] [6 8] [8 9] [10 12]] </br>
Output: [[1 5] [6 9] [10 12]]

## Algorithm
- create an empty vector called 'result' to store the merged intervals.
- sort the intervals in ascending order based on their start points.
- create a temporary vector called 'temp' and intialize it with first interval.
- iterate through the remaining intervals.
- check if the end point of current interval(interval[i][1]) is greater than or equal to the start point of temporary interval(temp[1]). If it is, update the end point of the temporary interval to the maximum of it current end point and the end point of the current interval.
- If above condition not satisfy, it means the intervals are not overlapping. Add the temporary interval to the result vector and update the temporary interval to the current interval.
- After the loop, add the final temporary interval to the result vector.
- Return the result vector containing the merged intervals.

Time Complexity: O(n logn)</br>
Space Complexity: O(n)

