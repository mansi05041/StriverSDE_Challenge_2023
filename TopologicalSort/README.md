# [Topological Sort](https://www.codingninjas.com/studio/problems/topological-sort_8230784?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
A Directed Acyclic Graph(DAG) is a directed graph that contains no cycles. Topological sorting of DAG is a linear ordering of vertices such that for every directed edge from vertex 'u' to vertex 'v'. vertex 'u' comes before 'v' in the ordering.

## Algorithm

### using indegree concept
- Initialize a vector 'indegree' to store the indegree (number of incoming edges) of each vertex.
- Calculate the indegree of each vertex based on the given edges.
- Initialize an adjacency list 'adj' to represent the graph using the given edges.
- Create a queue q and add all the vertices with indegree 0 to the queue.
- Intialize an empty vector 'ans' to store the topological sort result.
- While the queue is not empty, do the following:
    - Dequeue a vertex from the front of the queue.
    - Add the dequeued vertex to the ans vector.
    - For each neighbor of the dequeued vertex, reduce its indegree by 1
    - If the indegree of a neighbor becomes 0, enqueue that neighbor into the queue.
- Return the ans

Time Complexity: O(V+E)</br>
Space Complexity: O(V+E)

### using dfs concept
- Create an empty stack st to stor the nodes in the topological order.
- Intialize the adjacency list 'adj' to represent the graph using the given edges.
- Create a 'visited' vector of size 'v' (number of vertices) to keep the track of visited nodes. Initialize all elements to 0 (indicating not visited).
- Perform a DFS traversal starting from each unvisited node in the graph. For each unvisited node:
    - Call the dfs function to explore the node and its neighbors
    - In the dfs function
        - Mark the current node as visited.
        - Recursively call dfs for all unvisited neighbors of the current node.
        - Push the current node into the stack after visiting all its neighbors.
- After all DFS traversal are complete, the stack will contain nodes in topological order based on their completion times.
- Pop elements from the stack and store them in a vector 'ans'. The order in which elements are popped from the stack will be the topological sort order.
- Return the ans 

Time Complexity: O(V+E)</br>
Space Complexity: O(V+E)
