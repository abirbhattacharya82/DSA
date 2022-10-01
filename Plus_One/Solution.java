class Solution {
    public int[] plusOne(int[] digits) {
        
            int i;
            int c=1;
            for(i=digits.length-1;i>=0;i--)
            {
                digits[i]=digits[i]+c;
                if(digits[i]>9)
                {
                    digits[i]=0;
                    c=1;
                }
                else
                {
                    c=0;
                    break;
                }
            }
            if(c!=1)
            {
                return digits;
            }
            else
            {
                int a[]=new int[digits.length+1];
                a[0]=c;
                for(int j=1;j<a.length;j++)
                {
                    a[j]=digits[j-1];
                }
                return a;
            }
    }
}
