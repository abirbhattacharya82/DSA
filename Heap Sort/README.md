# Heap Sort #
Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to the selection sort where we first find the minimum element and place the minimum element at the beginning. Repeat the same process for the remaining elements.
* Heap sort is an in-place algorithm. 
* Its typical implementation is not stable, but can be made stable.
* Typically 2-3 times slower than well-implemented QuickSort.  
* The reason for slowness is a lack of locality of reference.

# Algorithm #
* First convert the array into heap data structure using heapify, than one by one delete the root node of the Max-heap and replace it with the last node in the heap and then heapify the root of the heap. Repeat this process until size of heap is greater than 1.

### Follow the given steps to solve the problem: ###

* Build a max heap from the input data. 
* At this point, the maximum element is stored at the root of the heap. Replace it with the last item of the heap followed by    reducing the size of the heap by 1. 
* Finally, heapify the root of the tree. 
* Repeat step 2 while the size of the heap is greater than 1.

# Time Complexity #
* Time Complexity of Heap Sort is O(N log N) 