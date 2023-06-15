# [Maximum Meetings](https://www.codingninjas.com/codestudio/problems/maximum-meetings_8230795?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given the schedule of N meetings with their start time Start[i] and end time End[i]. But you have only one meeting room. So you need to tell the meeting numbers you can organize in the given room, such that the number of meetings organized is maximum.</br>
<code>The start time of one choosen meeting can't be equal to the end time of the other chosen meeting. Also for the same end time, a meeting with smaller index is preferred. </code>

### Input_output
Input: start =[1 3 0 5 8 5], end=[2 4 6 7 9 9]</br>
Output: [2 4 6 7 9 9]

## Algorithm
- create a vector pairs 'meet' to store the meeting information. Each pair consists of the meeting number, start time and end time.
- sort the meet vector in non-decreasing order based on the end times of the meetings. If two meetings have the same end time, sort them based on their start times.
- create an empty vector answer to store the meeting numbers of the maximum meetings.
- Set the initial limit as the end time of the first meeting in the sorted meet vector.
- Add the meeting number of the first meeting to the answer.
- If the start time of the current meeting is greater than the limit, it means the meeting can be scheduled without overlapping. Update the limit to the end time of the current meeting and add its meeting number to the 'answer' vector.
- return the answer. 

Time Complexity: O(nlogn)</br>
Space Complexity: O(n)
