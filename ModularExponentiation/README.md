# [Modular Exponentiation](https://www.codingninjas.com/codestudio/problems/modular-exponentiation_8230803?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given a three integers 'x' and 'n' and 'm'. Task is to find (x^n)%m.

### Input_output
Input: x=3,n=1,m=2 </br>
Output: 1

## Algorithm
- Intialize ans = 1(accumulator variable) and temp = x
- Repeat the following steps until n not becomes 0
    - check if n is odd, then update ans as <code>ans=(ans%m * temp%m)%m</code>
    - update temp as <code>temp=(temp%m * temp%m)%m</code>
    - Right shift 'n' by 1 bit
- return ans%m

Time Complexity: O(logn)</br>
Space Complexity: O(1)

