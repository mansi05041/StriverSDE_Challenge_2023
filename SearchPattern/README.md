# [Search Pattern (Rabin Karp)](https://www.codingninjas.com/studio/problems/rabin-carp_8230831?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two strings, text of length 'n' and 'pattern' of length 'm', consisting of lowercase characters. Find all the occurrences of the string 'pattern' in 'text'. For each occurrence, print the index from where it starts in the string 'text'

### Input_output
Input: text = "cxyzghxyzvjkxyz", pattern = "xyz" </br>
Output: [2 7 13]

## Algorithm
- Preprocess the pattern and the text to calculate their hash values using rolling hash technique.
- Compare the hash value of the pattern with the hash values of each window of text (length equal to the pattern) to find potential matches.
- For potential matches, verify character by character if they are indeed matches.
- Return the starting indices of the pattern matches in the text.

Time Complexity : O((n-m)*m) ~ O(m)</br>
Space Complexity : O(1)
