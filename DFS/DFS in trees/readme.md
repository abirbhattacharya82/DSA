# Depth First Search using Tree Data Strucutres


### Depth-first search

DFS (Depth-first search) is technique used for traversing tree or graph. Here backtracking is used for traversal. In this traversal first the deepest node is visited and then backtracks to it’s parent node if no sibling of that node exist. 

### DFS Traversal of a Graph vs Tree

In graph, there might be cycles and dis-connectivity. Unlike graph, tree does not contain cycle and always connected. So DFS of a tree is relatively easier. We can simply begin from a node, then traverse its adjacent (or children) without caring about cycles. And if we begin from a single node (root), and traverse this way, it is guaranteed that we traverse the whole tree as there is no dis-connectivity,
