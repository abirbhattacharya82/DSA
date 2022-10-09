package duplicateElements;
import java.util.*;
import java.io.*;

public class SearchDuplicateElements {
    public static void main(String args[]) {
        int arr[] = {1,3,4,2,3};
        System.out.println("The duplicate element is " + findDuplicate(arr));
    }

    public static int findDuplicate(int[] arr) {
        int fast = arr[0], slow = arr[0];
        do{
            fast = arr[arr[fast]];
            slow = arr[slow];
        }while(fast != slow);

        fast = arr[0];

        while(fast != slow){
            fast = arr[fast];
            slow = arr[slow];
        }
        return slow;
    }
}
