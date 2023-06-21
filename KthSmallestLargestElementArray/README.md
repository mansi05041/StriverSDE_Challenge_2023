# [K-th Smallest and Largest Element of Array](https://www.codingninjas.com/studio/problems/kth-smallest-and-largest-element-of-array_8230829?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array 'arr' consisting of 'n' distinct integers and a positive integer 'k'. Find out the Kth smallest and largest element of the array.

### Input_output
Input: [1 2 5 4], k=3</br>
Output: [4 2] </br>
Explaination: 4 is the 3rd largest element and 2 is the 3rd smallest element in the array.

## Algorithm

### Naive approach
- Sort the array.
- return arr[k-1] as largest and arr[n-k] as smallest element.

Time Complexity: O(n*logn)</br>
Space Complexity: O(1)

### better approach using heapSort
- use minHeap for getting Kth smallest element in the array.
- use maxHeap for getting Kth largest element in the array.
- return the results.

Time Complexity: O(nlogn+klogn)</br>
Space Complexity: O(n)

### optimal approach using quickselect
- Initialize an empty vector 'ans' to store the results.
- Call the function that gives the results
    - The first call finds the Kth largest element
    - The second call finds the (n-k+1)th largest element (equivalent to the kth smallest element)
- The function that gives the result defined as:
    - It takes the input array within the specified range (left and right).
    - It uses the last element that is arr[right] as the pivot element for the partitioning.
    - Initialize p as left which act as partitioning index.
    - The loop starts from left to right-1, compares each element with the pivot element. If an element is smaller than the pivot, it is swapped with the element at index p and p is incremented. This ensures that all the elements smaller than the pivot are moved to the left side of the partition index.
    - After the loop the pivot element is swapped with the element at index p, effectively placing the pivot in its correct sorted position.
    - The Function then checks if the partition index 'p' is greater than or equal to k. If so, it means the Kth largest element lies in the left partition, so call this function recursively with range [left,p-1].
    - If the p is less than k-1, it means the kth largest element lies in the right partition, so call this function recursively with range [p+1,right].
    - If none of the above condition satisfied, it means the current pivot element (arr[p]) is the Kth largest element and return it.

Time Complexity: O(n)</br>
Space Complexity: O(1)