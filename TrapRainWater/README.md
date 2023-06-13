# [Trapping Rain Water](https://www.codingninjas.com/codestudio/problems/trapping-rain-water_8230693?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a long type of array of size 'N'. It represents an elevation map wherein arr[i] denotes the elevation of the ith bar. Print the total amount of rainwater that can be trapped in these elevations.

## Algorithm

### brute force
- Initialize a variable 'trapWater' to 0, which will store the total trapped water.
- Iterate over each element arr[i] in the array from index 1 to n-2
- for each element arr[i], find the maximum height on its left side by iterating from index 0 to i-1 , say 'maxLeft'.
- Similarly find the maximum height on its right side by iterating from i+1 to n-1, say 'maxRight'.
- calculate the trapped water at the current element arr[i] using min(maxLeft,maxRight)-arr[i]. If the calculated value is greater than 0, add it to trapWater.
- After the iteration is complete, return the final value of trapWater.

Time Complexity: O(n<sup>2</sup>)</br>
Space Complexity: O(1)

### better approach
- Base case : check if n is less than or equal to 1, then there are not enough bars to store the rain water. so return 0.
- Initialize 'maxLeft' and 'maxRight' to store the maximum height on the left and right sides respectively.
- Two pointers 'left' and 'right' are initialized such that left=1 and right=n-2
- Initialize trapWater = 0 , that keeps the track of total trapped water.
- Repeat the following steps until left<=right
    - if maxLeft<maxRight , it means the current elements on the left side is smaller than the current element on the right side. Then check if arr[left]>maxLeft. Then updates the maxLeft to the new maximum height.
    Otherwise, update trapWater such that <code>trapWater+=maxLeft-arr[left]</code>
    - if maxLeft>maxRight, the algorithm follows similar process but for the right side. It checks if the current element arr[right]>maxRight. If it is, update the maxRight to the new maximum height. Otherwise, update trapWater such that <code>trapWater+=maxRight-arr[right]</code>
    - After each increment of loop either left is increment by 1 or right decrement by 1.
- return trapWater, which represents the total trapped water.

Time Complexity: O(n)</br>
Space Complexity: O(1)