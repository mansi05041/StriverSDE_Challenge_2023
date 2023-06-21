# [K-th Element of two sorted array](https://www.codingninjas.com/studio/problems/kth-element-of-two-sorted-arrays_8230824?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Return the Kth Element of two Sorted array.

### Input_output
Input: arr1 = [3 11 23 45 52], arr2 = [4 12 14 18], k = 3</br>
Output: 11 </br>

## Algorithm

### Naive approach
- merge the array as combined, then sort it ascending order.
- return arr[k-1] as result

Time Complexity: O(n*logn)</br>
Space Complexity: O(1)

### better approach using mergeSort two pointer
- using two pointer technique, track the Kth element.
- return it.

Time Complexity: O(n)</br>
Space Complexity: O(1)

### optimal approach using binarySearch
- check if row1 is smaller than row2. if not swap it.
- Initialize the lower bound as max(0,k-n) and upper bound as min(k,m).
- Enter a binary search loop with low<=high.
- calculate the midpoints cut1 and cut2 as the partitions between row1 and row2.
- Determine the left and right elements of each partition:
    - left1 is the element to the left of cut1 in row1.
    - left2 is the element to the left of cut2 in row2.
    - right1 is the element to the right of cut1 in row1.
    - right2 is the element to the right of cut2 in row2.
- compare the left and right elements of both partitions
    - if left1<= right2 and left2<=right1, return max(left1,left2)
    - if left1>right2 update high = cut1-1 to search in the lower half.
    - otherwise update low = cut+1 to search in the upper half.
- If the loop ends without finding a result, return 1.

Time Complexity: O(log(min(m,n)))</br>
Space Complexity: O(1)