""" implementation of merge sort in python """
def MergeArr(array_1,array_2,array):
    i =0
    j= 0
    k= 0
    
    while (i<len(array_1) and j<len(array_2)):
        if array_1[i] < array_2[j]:
            array[k] = array_1[i]
            i = i+1
            k = k+1
        else:
            array[k] = array_2[j]
            j = j+1
            k = k+1
    while (i < len(array_1)):
        array[k] = array_1[i]
        i = i+1
        k = k+1
    while (j < len(array_2)):
        array[k] = array_2[j]
        j = j+1
        k = k+1

def MergeSort(array):
    if len(array) == 0 or len(array) == 1:
        return
    mid = len(array)//2
    array_1 = array[0:mid]
    array_2 = array[mid:]
    MergeSort(array_1)
    MergeSort(array_2)
    MergeArr(array_1,array_2,array)
    


#input 
print("give us the elements in a line separated by space ")
array = list(int(i) for i in input().strip().split(' '))
MergeSort(array)
print(*array)
