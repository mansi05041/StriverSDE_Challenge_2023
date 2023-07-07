# [The Celebrity Problem](https://www.codingninjas.com/studio/problems/the-celebrity-problem_8230781?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents
- [Question](#question)
- [Algorithm](#algorithm)

## Question
There are 'N' people at a party. Each person has been assigned a unique id between 0 to N-1(both inclusive). A celebrity is a person who is known to everyone but doesn't know anyone at the party.
Give a helper function knows(A,B) - it will return "true" if the person having id 'A' know the person having id 'B' in the party, "false" otherwise. Your task is to find out the celebrity at the party. Print the id of the celebrity, if there is no celebrity at the party then print -1.


## Algorithm

### Brute Force Algorithm
- Iterate over each person in the party from 0 to n-1
- For each person, check if they don't know anyone by iterating over all other people and calling "knows" function. If they know someone, mark them as not a potential celebrity.
- If a person is found who doesn't know anyone, check if everyone knows that person by iterating over all the other people and calling the "knows" function. If someone doesn't know that person, they are not a celebrity.
- If a person is found who is not known by anyone and known by everyone, they are the celebrity. Return their ID.
- If no celebrity is found after checking all the people, return -1 to indicate that no celebrity exists.

Time Complexity: O(n<sup>2</sup>)</br>
Space Complexity: O(1)

### Optimized Approach
- Create a stack 'st' to store the Ids of all the people.
- Iterate over the people Ids and push them onto the stack.
- While there are at least two people in the stack, perform the following steps:
    - pop the top two people from the stack and assign them to variable A and B.
    - If A knows B, then A is not a potential celebrity, so push B onto the stack.
    - Otherwise, If B knows A, then B is not a potential celebrity, so push A back onto the stack.
- After the loop, if the stack is empty there is no potential celebrity, so return -1.
- Get the potential celebrity id by retrieving the top element from the stack.
- Verify if the potential celebrity is a celebrity by performing the following checks:
    - check if the potential celebrity knows any other person. if yes return -1 since a celebrity should not know anyone.
    - check if all other people know the potential celebrity. if any person doesn't know the potential celebrity, return -1.
- If all the checks pass, the potential celebrity is the actual celebrity, so return their ID.

Time Complexity: O(n)</br>
Space Complexity: O(1)