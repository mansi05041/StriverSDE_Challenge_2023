# [Next Smaller Element](https://www.codingninjas.com/studio/problems/next-smaller-element_8230814?challengeSlug=striver-sde-challenge)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array 'arr' of integers of length 'n'. Your task is to find the next smaller element for each of the array elements. 
Next Smaller element for any array element is the first element to the right of that element which has a value strictly smaller than that element. If for any array element the next smaller element does not exists, then print -1 for that array element.

### Input_output
Input: [2 3 1] </br>
Output: [1 1 -1]

## Algorithm

### Brute force
- Use nested loop, where the outer loop iterates through each element of the input array 'arr' and the inner loop searches for the next smaller element after the current element.
```
vector<int> nextSmallerElement(vector<int>& arr,int n){
    vector<int> res(n,-1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                res[i] = arr[j];
                break; // found the next smaller element
            }
        }
    }
    return res;
}

```
Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(n)

### Better approach using stack
- Declare a stack and a vector of integers 'res' of size 'n' intialized with -1. The res vector will store the next smaller element for each element in the input array.
- Iterate through each element of the input array 'arr':
    - if the stack is not empty and the element at the top of stack is greater than the current element. If it is true, then it means the current element is the next smaller element for the element at the top of stack.
    - update res[st.top()] = arr[i]
    - pop the top element from the stack since we found the next smaller element for it.
    - push the current index i onto the stack.
- return res

Time Complexity : O(n)</br>
Space Complexity : O(n)
