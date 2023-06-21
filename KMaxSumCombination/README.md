# [K Max Sum Combinations](https://www.codingninjas.com/studio/problems/day-29-k-max-sum-combinations_8230768?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two arrays 'a' and 'b' of size 'n' each. It is also given an integer 'k'. You have to find the K maximum and valid sum combinations of the arrays 'a' and 'b'. Sum combination is made by adding one element from array 'a' and another element from 'b'

### Input_output
Input: a=[1 3], b=[4 2], k=2</br>
Output: [7 5]

## Algorithm

### Naive approach
- sort the both arrays.
- try all the combination and stored in the vector , say arr
- store that vector in descending order.
- return the result from arr[0] to arr[k-1].

Time Complexity: O(n<sup>2</sup>)</br>
Space Complexity: O(n)

### better approach using maxheap
- sort the both arrays in ascending order.
- create a max heap to store pairs of the sum and indices (i,j) of elements from 'a' and 'b' respectively.
- create a set to keep the track of the pairs that have been processed.
- Push the pair (a[n-1]+b[n-1],{n-1,n-1}) into the max heap and insert it into the set.
- Intialize an empty vector to store the results.
- Repeat the following steps k times.
    - remove the top element from the max heap.
    - extract the sum, index i and index j from the top element.
    - check if the pair (i-1,j) is not present in the set.
        - insert the pair (i-1,j) into the set.
        - push thr pair(a[i-1]+b[j],{i-1,j}) into maxheap.
    - check if the pair (i,j-1) is not present in the set.
        - insert the pair (i,j-1) into the set.
        - push thr pair(a[i]+b[j-1],{i,j-1}) into maxheap.
    - add the sum to the vector 'ans'.
- return the ans

Time Complexity: O(n+k logn)</br>
Space Complexity: O(k)


