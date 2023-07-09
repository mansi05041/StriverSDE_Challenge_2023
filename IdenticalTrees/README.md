# [Check Identical Trees](https://www.codingninjas.com/studio/problems/check-identical-trees_8230719?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given two binary Trees of integers. Task is to return true if the two trees are identical. Otherwise, return false.

## Algorithm
- check if both 'root1' and 'root2' are NULL. If they are, return true because two empty trees are considered identical.
- check if either 'root1' or 'root2' is NULL. If only one of them is NULL, return false because the trees are not identical.
- check if the data stored in 'root1' is not equal to the data stored in 'root2'. If they are not equal, return false because the trees are not identical.
- Recursively call the identicalTrees function for the left subtrees of root1 and root2, and store the result in leftIdentical.
- Recursively call the identicalTrees function for the right subtrees of root1 and root2, and store the result in rightIdentical.
- Return the logical AND of leftIdentical and rightIdentical, which indicates whether both subtrees are identical or not.

Time Complexity: O(n)</br>
Space Complexity: O(h) - h is the height of tree