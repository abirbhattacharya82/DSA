# Kedane's Algorithm
### Algorithm for Maximum Subarray Sum

## What is Kadane’s Algorithm?
Kadane’s algorithm is one of the famous approaches to solve the problem using dynamic programming. As we all know, the maximum subarray problem is one of the famous problems in the field of dynamic programming. You must be thinking that the problem seems to be easy and the result of the problem will be the sum of all elements in an array. But this is not correct. There will be negative integer elements in the array that can decrease the sum of the entire array. Therefore, to solve this problem, we will use the kadane’s algorithm.

Here the algorithm will find the continuous subarray in the 1D integer array which has the largest sum possible. The first approach for everyone after understanding the problem statement will be applying the brute-force approach and solving the problem. But by doing so, the time complexity of the solution will be O(n2) which is not very good. Therefore, we will apply the kadane’s algorithm which solves the problem by traversing over the whole array using two variables to track the sum so far and maximum total. The most important thing to pay attention to while using this algorithm is the condition using which we will update both variables.

## Time Complexity
The time complexity of kadane’s algorithm for an array containing n integer element is O(n) as only one for loop is to be executed throughout the program. Similarly, the auxiliary space complexity of the algorithm is O(1).

## Applications
There are many applications of kadane’s algorithm and some of them are as mentioned below:

- Finding maximum subarray sum for a given array of integer
- Used as an image processing algorithm
- It can be used to solve the problems like “Station Travel in Order” and “Hotels Along the Coast”
- It is used for business analysis

## Conclusion
Therefore, from the problem statement of finding the maximum subarray sum, the solution doesn’t seem to be this easy but using kadane’s algorithm we simplified it and achieved the solution with the least time complexity. This was possible because kadane’s algorithm uses the technique to gather the information which is required to reach the solution avoiding unnecessary storage of data and hence, this algorithm can be considered as a simple example of a dynamic programming approach with lots of practical application in the real world.


#### Contrubuted by: Sayak Saha [https://github.com/sayakongit/]