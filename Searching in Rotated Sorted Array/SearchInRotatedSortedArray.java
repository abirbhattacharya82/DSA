import java.util.Scanner;

public class SearchInRotatedSortedArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of the array: ");
        int n = sc.nextInt();
        int[] nums = new int[n];
        System.out.println("Enter the elements of the Rotated Array: ");
        for(int i=0; i<n; i++) {
            nums[i] = sc.nextInt();
        }
        System.out.println("Enter the target element: ");
        int target = sc.nextInt();
        sc.close();
        searchArray(nums, target);
    }
    public static void searchArray(int[] nums, int target) {
        //Using modified binary search
        if(target == nums[0]){
            System.out.println("Element found at index: 0");
        }
        int start = 1,
              end = nums.length-1,
             sEle = nums[0];

        while(start<=end)
        {
            int mid = start + (end-start)/2,
                  m = nums[mid];

            if( target > m ) {
                if( target > sEle ) {
                    if( m > sEle )
                        start = mid + 1;
                    else
                        end = mid - 1;
                }
                else
                    start = mid + 1;
            }   
            else if( target < m ) {
                if( target > sEle )
                    end = mid - 1;
                else {
                    if( m > sEle)
                        start = mid + 1;
                    else
                        end = mid - 1;
                }
            }
            else {
                System.out.println("Element found at index: "+mid);
                return ;
            }
        }
        System.out.println("Element not found!");
    }
}