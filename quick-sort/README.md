# Quick sort
Quicksort is a fast sorting algorithm, which is used not only for educational purposes, but widely applied in practice. On the average, it has O(n log n) complexity, making quicksort suitable for sorting big data volumes. The idea of the algorithm is quite simple and once you realize it, you can write quicksort as fast as bubble sort.

__How quick sort works?__

The divide-and-conquer strategy is used in quicksort. Below the recursion step is described:

__Choose a pivot value.__ We take the value of the middle element as pivot value, but it can be any value, which is in range of sorted values, even if it doesn't present in the array.

__Partition.__ Rearrange elements in such a way, that all elements which are lesser than the pivot go to the left part of the array and all elements greater than the pivot, go to the right part of the array. Values equal to the pivot can stay in any part of the array. Notice, that array may be divided in non-equal parts.

__Sort both parts.__ Apply quicksort algorithm recursively to the left and the right parts

## Partition algorithm in detail
There are two indices low and high and at the very beginning of the partition algorithm low points to the first element in the array and high points to the last one. Then algorithm moves low forward, until an element with value greater or equal to the pivot is found. Index high is moved backward, until an element with value lesser or equal to the pivot is found. If low ≤ high then they are swapped and low steps to the next position (low + 1), high steps to the previous one (high - 1). Algorithm stops, when low becomes greater than high.

After partition, all values before low-th element are less or equal than the pivot and all values after high-th element are greater or equal to the pivot.
<pre>
Input List:         [7, 6, 5, 4, 3, 2, 1]
2. The function will compare and partition each element around the chosen pivot. Hover over numbers for more information...

Partition0:         [7, 6, 5, 4, 3, 2, 1]
                      /               \
               [3, 2, 1, 4]         [7, 6, 5]
3. If the value is less than the pivot, the value will shift to the left partition, and if the value is greater than the pivot, the value will shift to the right partition.

Partition1:    [3, 2, 1, 4]         [7, 6, 5]
                 /      \            /     \
            [1, 2]      [3, 4]    [5, 6]   [7]
4. This occurs recursively, and a new pivot is selected to sort the sub-partitions.

Partition2:    [1, 2]      [3, 4]    [5, 6]
                /  \        /  \      /  \
              [1]  [2]    [3]  [4]  [5]  [6]
5. This continues until the base case, where partitions are of length zero or one.

             [1]  [2]  [3]  [4]  [5]  [6]  [7]
                \    \   \   |   /   /    /
Output List:       [1, 2, 3, 4, 5, 6, 7]
</pre>

<img src="https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif" width = "60%">
