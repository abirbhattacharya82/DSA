package megeSortedArrays;
import java.util.*;
import java.io.*;

public class MergeSortedArrays {
    public static void main(String[] args) {
        int arr1[] = {1,4,7,8,10};
        int arr2[] = {2,3,9};
        System.out.println("Before merge:");
        for (int i = 0; i < arr1.length; i++) {
          System.out.print(arr1[i] + " ");
        }
        System.out.println();
        for (int i = 0; i < arr2.length; i++) {
          System.out.print(arr2[i] + " ");
        }
        System.out.println();
        merge(arr1, arr2, arr1.length, arr2.length);
        System.out.println("After merge:");
        for (int i = 0; i < arr1.length; i++) {
          System.out.print(arr1[i] + " ");
        }
        System.out.println();
        for (int i = 0; i < arr2.length; i++) {
          System.out.print(arr2[i] + " ");
        }
    
      }

      public static void merge(int[] arr1, int[] arr2, int len1, int len2) {
        int ptr1 = 0, ptr2 = 0;

        for(; ptr1 < len1; ptr1++){
            if(arr1[ptr1] > arr2[ptr2]){
                int temp = arr1[ptr1];
                arr1[ptr1] = arr2[ptr2];
                arr2[ptr2] = temp;
            }

            Arrays.sort(arr2);
        }
      }
}
