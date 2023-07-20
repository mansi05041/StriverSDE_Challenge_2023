# [Flood Fill Algorithm](https://www.codingninjas.com/studio/problems/flood-fill-algorithm_8230806?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents
- [Question](#question)
- [Algorithm](#algorithm)

## Question
The image is represented in the form of a 2D array of size M*N. Each pixel in the image is a positive integer. Given the coordinates (row and column) of a certain pixel and the new color value. Need to replace the color of the given pixel and all the adjacent same-colored pixels with the new color.

## Algorithm
- Save the old color of the starting cell(x,y) as 'oldColor'
- If the 'oldColor' is equal to the 'newColor', return the original image as no changes are required.
- Call the helper fucntion to perform the flood-fill starting from the given coordinates(x,y)

Helper function implementation:
- Change the color of the current cell(x,y) to the newColor
- Define the two arrays 'newI' and 'newJ', representing the possible movements in the vertical and horizontal directions, respectively(up,down,left,right).
- For each possible direction, calculate the new coordinates(xi,yi)
- Check if the new coordinates(xi,yi) are within the bounds of the image and have the same color as the 'oldColor'
- If the conditions are met, call the helper function recursively with the new coordinates(xi,yi)

Time Complexity: O(n)</br>
Space Complexity: O(n)