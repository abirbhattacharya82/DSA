# DFS in Graph Data structure

![alt text](https://www.tutorialspoint.com/data_structures_algorithms/images/depth_first_traversal.jpg)

### Depth First Search (DFS) algorithm traverses a graph in a depthward motion and uses a stack to remember to get the next vertex to start a search, when a dead end occurs in any iteration.

As in the example given above, DFS algorithm traverses from S to A to D to G to E to B first, then to F and lastly to C. It employs the following rules.

    Rule 1 − Visit the adjacent unvisited vertex. Mark it as visited. Display it. Push it in a stack.

    Rule 2 − If no adjacent vertex is found, pop up a vertex from the stack. (It will pop up all the vertices from the stack, which do not have adjacent vertices.)

    Rule 3 − Repeat Rule 1 and Rule 2 until the stack is empty.
