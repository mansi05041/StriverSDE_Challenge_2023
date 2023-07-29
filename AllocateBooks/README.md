# [Allocate Books](https://www.codingninjas.com/studio/problems/allocate-books_8230810?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents
- [Question](#question)
- [Input_output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given a list of books with their respective reading times. Each book is to be allocated to a student for reading, but there is a constraint that no student should read for more than 'hpd' (hours per day). Your task is to find the minimum value of 'hpd' such that it is possible to allocate the books among students without violating the constraint. Implement the function long long ayushGivesNinjatest(int n, int m, vector<int> time) to find the minimum 'hpd' using binary search.

# Input_output
input: n= 3, m= 5, time = [1 2 2 3 1] </br>
output: 4

## Algorithm
- Define the function ispossible, which takes the current 'hpd' (hours per day), the limit on the number of students, and the list of book reading times as input.
- Initialize two variables, count and sum, to keep track of the number of students required and the total reading time of a student in a day, respectively. Start with count = 1 (assuming at least one student is required to read the books) and sum = 0.
- Iterate through each book's reading time in the input list:
    - If the reading time of the book exceeds 'hpd', return false immediately, as it is not possible to allocate this book to any student without violating the constraint.
    - If the current student's total reading time (sum) along with the book's reading time (it) is less than or equal to 'hpd', add the time to the student's total reading time (sum).
    - If adding the current book's reading time exceeds 'hpd', it means we need to allocate it to a new student. So, increment the count and reset the student's total reading time (sum) to the current book's reading time (it).
- After iterating through all the books, check if the number of students required (count) is less than or equal to the given limit. If it is, return true; otherwise, return false.
- Define the function ayushGivesNinjatest, which takes the total number of books (n), the number of students (m), and the list of book reading times (time) as input.
- Initialize low as 1 and high as the maximum value of a long long (LLONG_MAX).
- Use binary search to find the minimum value of 'hpd' such that it is possible to allocate the books accordingly:
    - Calculate the mid-point (mid) of the current range (i.e., low to high).
    - Call the ispossible function with the current 'hpd' (mid) and check if it is possible to allocate the books with this 'hpd'.
    - If it is possible, update the upper bound (high) to mid, as we need to find a smaller 'hpd' that satisfies the constraint.
    - If it is not possible, update the lower bound (low) to mid + 1, as we need to find a larger 'hpd'.
- Return the final value of low as the minimum 'hpd' needed to allocate the books while satisfying the given constraints.

Time Complexity: O(n*log(n)) </br>
Space Complexity: O(1)