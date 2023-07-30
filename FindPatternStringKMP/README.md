# [Find Pattern in String - KMP](https://www.codingninjas.com/studio/problems/find-pattern-in-string-kmp-algorithm_8230819?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two strings 'S' and 'P' consisting of lowercase english alphabets. Task is to find whether the 'P' is present in 'S' as a substring or not.

### Input_output
Input: pattern = "xxy", str = "yxxyxxy" </br>
Output: True

## Algorithm

### Brute Force
```
bool findPattern(string p,string s){
    int m = p.size();
    int n = s.size();

    for(int i=0;i<=n-m;i++){
        int j = 0;

        while(j<m && s[i+j]==p[j]) j++;

        if(j==m) return true;
    }

    return false;
}
```
Time Complexity : O(n*m)</br>
Space Complexity : O(1) 

### KMP
- Create an array 'lps' (longest proper prefix which is also a suffix) to store the longest proper prefix that matches the suffix for each prefix of the pattern string 'p'. The lps array helps us skip unnecessary character comparisions when a mismatch occurs.
- Initalize two pointers 'i' and 'j' to track the string 's' and the pattern 'p' respectively.
- Traverse through the string s
    - if the s[i] == p[j], characters matches then increment both i and j
    - if j reaches the end of the pattern, then the pattern has been found in the string, and the function returns true.
    - If there is a mismatch at some point, move j to the value stored in the lps array at index j-1. This step helps us to skip unnecessary comparisons and avoid rechecking previously matched characters.
    - if j>0 then set j = lps[j-1], otherwise increment i
- return false, indicating no pattern found

Time Complexity : O(n)</br>
Space Complexity : O(m) 


