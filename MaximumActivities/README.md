# [Maximum Activities](https://www.codingninjas.com/codestudio/problems/maximum-activities_8230800?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given N activities with their start[] and finish[]. You need to tell the maximum number of activities a single person can perform.

### Input_output
Input:start = [1 3 2 5], finish = [2 4 3 6] </br>
Output: 4

## Algorithm
- create a vector of pairs called 'activity' to store the start and finish times of each activity.
- sort the activity in ascending order based on the finish times.
- initialize a variable 'total' to 1 , count the number of activities.
- initialize a variable 'limit' to the finish time of the first activity in the sorted 'activity' vector.
- iterate through the remaining activities in the 'activity' vector starting from index 1.
    - if the start time of the current activity >= limit, then it means the activity can be performed without overlapping with the previous one.
    - increment the total by 1.
    - update the limit as finish time of current activity
- return total

Time Complexity: O(n logn)</br>
Space Complexity: O(n)
