# [Online Stock Span](https://www.codingninjas.com/studio/problems/online-stock-span_8230843?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array 'Price' of size 'n' where price[i] is the price of a crypto on an ith day in INR, where 0<=i<N
Task is to return an array of size 'n' where the ith integer is the span of ninja coin price on an ith day.

### Input_output
Input: arr=[4 2 3 3 6]</br>
Output: [1 1 2 3 5]

## Algorithm

### Brute force 
```
function findSpans(price){
    n = price.size()
    vector<int> res(n,1) 

    for(i=0 to n){
        j = i-1
        while(j>=0 && price[j]<=price[i]){
            res[i]++;
            j--;
        }
    }

    return res
}
```
Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(n)

### Better approach
- call the 'prevGreater' function with price vector to get the 'PG' vector containing the indices of the previous greater elements for each day.
- create a vector 'res' that stores the spans.
- Iterate through each day 'i' 
    - calculate the span for the current day as <code>current index (i) - previous greater element index (PG[i])</code>
    - store the calculate span in res[i]
- return 'res'

Time Complexity : O(n)</br>
Space Complexity : O(n)
