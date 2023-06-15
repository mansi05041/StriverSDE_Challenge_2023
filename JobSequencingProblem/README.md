# [Job Sequencing Problem](https://www.codingninjas.com/codestudio/problems/job-sequencing-problem_8230832?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a N X 2 , 2D array 'jobs' where jobs[i][0] denotes the deadline of ith job and jobs[i][1] denotes the profit associated with ith job.
You will make a certain profit if you complete the job within the deadline associated with it. Each job takes 1 unit od time to be completed, and you can schedule only one job at a particular time. Task is to find out the maximum profit you can make.

### Input_output
Input: [ [2,30] [2,40] [1,10] [1,10] ]</br>
Output: 70

## Algorithm
- Sorting: The jobs are sorted in descending order based on their profits using the sort.
- Finding the maximum deadline.
- creating a time slot array of size deadline+1
- Maximizing profit: for each job, starting from the highest deadline, the algorithm searches for an available slot in the 'slot' array by traversing backward. If a slot is found, the job is assigned to that slot, and the profit is added to the maxProfit.

Time Complexity: O(n logn)</br>
Space Complexity: O(n)
