# [Count Subarrays with Given XOR](https://www.codingninjas.com/codestudio/problems/count-subarrays-with-given-xor_8230830?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of integers 'arr' and an integer 'x'. Task is to find the number of subarrays 'arr' which have bitwise XOR of the elements equal to 'x'

### Input_output
Input: arr=[5 3 8 3 10], x=8 </br>
Output: 2

## Algorithm

### Naive Approach
- In nested loop generate the subarray and find the xor of that subarray.
```
int subarrayXOR(vector<int>& arr,int x){
    int count=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int xorr=0;
        for(int j=i;j<n;j++){
            xorr^=arr[j];
            if(xorr==x) count++;
        }
    }
    return count;
}

```
Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(1)

### Better approach
- Intialize 'xorr' and 'count' as 0, where xorr maintains the prefix XOR of the arr.
- use an map to store the XOR values encountered as far as keys and their frequency as values.
- Iterate through each element 'it' in the arr
    - update xorr as <code>xorr^=it</code>
    - check if it the current XOR 'xorr' is equal to 'x', if true increment count by 1.
    - check if 'xorr^x' exists as a key in the map 'mp'. If true, increment count by the frequency of the value present in the map.
    - increment the frequency of xorr in map by 1.
- return the count

Time Complexity: O(n)</br>
Space Complexity: O(n)
