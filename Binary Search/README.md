## Binary Search algorithm

#### This is an algorithm used to search a particular target element in a sorted array/list.
##### Time Complexity: O(log n)
##### Auxiliary Space: O(log n)

#### Main steps:
* Take the array and the target element.
* Initialize the **start** as first index and **end** as last index  of the array/list.
* Run a loop as long as your **start <= end**.
* Calculate the **middle index** of the array between **start** and **end**.
* Now check if the **element at middle index** is either **equal/smaller/greater** than the **target** element .
* If the **middle element** is **equal** to the target, **return the middle index**.
* If the **middle element** is **larger** than the target element, set **end** as **middle - 1** and search in the first half of the array.
* If the **middle element** is **smaller** than the target element, set **start** as **middle + 1** and search in the second half of the array.
* Keep repeating the above steps as long as **start <= end**.
* If the loop breaks and the **element is not found**, return **-1**
