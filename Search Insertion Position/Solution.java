class Solution {
    public int searchInsert(int[] a, int target) {
        int mid=0;
        int l=0;
        int h=a.length-1;
        while(l<=h)
        {
            mid=(l+h)/2;
            // System.out.println(mid);
            if(a[mid]==target)
            {
                return mid;
            }
            else if(a[mid]>target)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        
        if(a[mid]<target)
        {
            return mid+1;
        }
        else
        {
            return mid;
        }
    }
}
