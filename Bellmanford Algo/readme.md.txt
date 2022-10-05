Bellman-Ford Algorithm
It is a single-source shortest path (minimum weight) algorithm very similar to Dijkstra's algorithm. It can be applied in a graph if we want to find the shortest path. Note that it deals with the negative edge weights. The limitation of the algorithm is that there should not be negative cycles (a cycle whose sum of edges produces a negative value) in the graph. Consider the following graph with cycle.

Bellman-Ford Algorithm Java
The runtime complexity of the algorithm is O(v*e) and space complexity is O(v). One should use the algorithm if the graph has negative edge weights.