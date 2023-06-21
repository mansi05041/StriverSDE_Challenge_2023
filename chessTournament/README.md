# [Chess Tournament](https://www.codingninjas.com/studio/problems/chess-tournament_8230779?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Chess Tournament is going to be organized. There will be C chess players going to attend the tournament. All the players will be staying in a hotel. The hotel has N free rooms available for the players, where one player will choose one room to live in. The ith room is at position[i] in the hotel. All the rooms are in distinct positions. Focus level of a chess player is defined as the minimum distance between his room and the room of another player. The overall focus of a tournament is defined as the minimum focus level among all players.

### Input_output
Input: positions = [1 2 3 4 6], n=5, c=3 </br>
Output: 2

## Algorithm
- sort the positions in ascending order to get the vaccant rooms in increasing order.
- Initialize the variables:
    - ans = 0 ( maximum possible distance between two rooms)
    - low = 1
    - high = positions[n-1]
- Perform the binary search on the possible distances between rooms using the low and high values.
- Inside the binary search loop:
    - Initialize the previousRoom with the first element of the position.
    - Initialize the count variable as 1 since the first room is always allocated.
- calculate the mid value
- iterate from i = 1 to n-1
    - check if the distance between the current position and the previous room >= mid , then increment the count and update the previousRoom.
- check if the count >=c , if true then update ans = mid and update the value of low = mid+1 to search for larger distance.
- otherwise, update the high = mid-1 to search for smaller distance.
- return the ans.

Time Complexity : O(n log m)</br>
Space Complexity : O(1)
