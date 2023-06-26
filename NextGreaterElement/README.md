# [Next Greater Element](https://www.codingninjas.com/studio/problems/next-greater-element_8230718?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array 'arr' of integers of length 'n'. Your task is to find the next greater element for each of the array elements. 
Next Greater element for any array element is the first element to the right of that element which has a value strictly greater than that element. If for any array element the next greater element does not exists, then print -1 for that array element.

### Input_output
Input: [1 3 2] </br>
Output: [3 -1 -1]

## Algorithm

### Brute force
- Use nested loop, where the outer loop iterates through each element of the input array 'arr' and the inner loop searches for the next greater element after the current element.
```
vector<int> nextSmallerElement(vector<int>& arr,int n){
    vector<int> res(n,-1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                res[i] = arr[j];
                break; // found the next greater element
            }
        }
    }
    return res;
}

```
Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(n)

### Better approach using stack
- Declare a stack and a vector of integers 'res' of size 'n' intialized with -1. The res vector will store the next greater element for each element in the input array.
- push the last index onto the stack.
- Iterate through each element of the input array 'arr' from n-1 to 0:
    - while the stack is not empty and the element at the top of stack is smaller and equal to the current element, then pop the element from stack.
    - update res[i] = arr[st.top()] if the stack is not empty
    - push the current index i onto the stack.
- return res

Time Complexity : O(n)</br>
Space Complexity : O(n)
