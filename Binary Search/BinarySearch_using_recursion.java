
import java.util.Arrays;

public class BinarySearch_using_recursion {
  public static void main(String[] args) {
    int[] arr = { 1, 2, 3, 4, 5, 6 };
    System.out.println(searcher(arr, 3, 0, arr.length - 1));
  }

  static int searcher(int arr[], int target, int start, int end) {
    // checking if array is empty
    if (start > end) {
      return -1;
    }
    // calculating middle index of array
    int mid = start + (end - start) / 2;
    // if target found then return the index of answer
    if (arr[mid] == target) {
      return mid;
    }
    // checking if the first element of array is less than mid element
    if (arr[start] <= arr[mid]) {
      // checking if target is less than middle and equal to middle element
      // also target is less than first element
      if (target <= arr[mid] && target >= arr[start]) {
        // calling function so that it check the left part of array which is smaller
        // than middle element
        return searcher(arr, target, start, mid - 1);
      } else {
        // calling function so that it check the right part of array which is greater
        // than middle element
        return searcher(arr, target, mid + 1, end);
      }
    }
    // checking if target is greater than middle element and target is less than
    // last element of array
    if (target >= arr[mid] && target <= arr[end]) {
      // searching on right side of array
      return searcher(arr, target, mid + 1, end);
    }
    // searching on left side of array
    return searcher(arr, target, start, mid - 1);

  }
}