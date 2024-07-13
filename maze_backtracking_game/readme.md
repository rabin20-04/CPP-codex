# Rat in a Maze Problem - C++ Implementation
## Overview
This program solves the Rat in a Maze problem using a backtracking approach. The problem is to find a path for a rat from the top-left corner to the bottom-right corner of a given maze. The rat can only move down or right, and it can only move to cells that contain a 1. Cells with 0 are considered blocked and cannot be traversed.

### Input
#### The program expects the following input:

An integer n representing the size of the n x n maze.
An n x n grid of integers (only 0s and 1s) representing the maze.
#### Output
If a solution exists, the program outputs the solution grid, where 1 represents the path taken by the rat and 0 represents cells not part of the path. If no solution exists, the program outputs "No solution exists."


### Example
### Input :  
``` 
5
1 0 1 1 0 
1 1 0 1 0 
0 1 1 0 1 
0 0 1 0 1 
0 0 1 1 1
```
### Output
```
1 0 0 0 0 
1 1 0 0 0 
0 1 1 0 0 
0 0 1 0 0 
0 0 1 1 1
``` 
## Code Explanation
### Main Function
#### Input Reading:   
The program starts by reading the size of the maze n and then the n x n maze itself.
Memory Allocation: Dynamic memory allocation is used to create the maze (arr) and the solution matrix (solArr).

### Initialization: 
The solution matrix is initialized with 0s.
### Function Call: 
The ratinMaze function is called to find a path from the top-left corner to the bottom-right corner.
### Output:
 If a path is found, the solution matrix is printed; otherwise, a message indicating no solution is printed.

### ratinMaze: 
This is the core function that uses recursion and backtracking to find the path. It tries to move down and right from the current cell and backtracks if a move doesn't lead to a solution.


# Getting started 
### Clone this Repository
```
https://github.com/rabin20-04/OOP_cpp.git

cd rat-in-maze
```
