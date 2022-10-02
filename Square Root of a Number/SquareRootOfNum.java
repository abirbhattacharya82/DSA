import java.util.Scanner;

public class SquareRootOfNum{
    public static void main(String... args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a positive number: ");
        int number = sc.nextInt();
        if(number<0) {
            System.out.println("Entered number is negative!");
            System.exit(0);
        }
        System.out.println("Enter the required precision: ");
        int precision = sc.nextInt();
        sc.close();
        //Percision determines the required accuracy of the square root
        String squareRoot = getSqRoot(number, precision) + "";
        squareRoot = squareRoot.substring(0, squareRoot.indexOf('.') + precision + 1);
        System.out.format("Square Root of %d : %s\n", number, squareRoot);
    }
    private static double getSqRoot(int number, int precision){
        int start = 1, end = number/2;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(mid*mid>number)
                end = mid-1;
            else if(mid*mid<number)
                start = mid+1;
            else{
                return (double)mid;
            }
        }
        //to get the decimal part.
        return getDecimalPart(end, number, precision);
    }
    private static double getDecimalPart(int number, int target, double precision){
        precision = 1/Math.pow(10,precision);
        double start = number, 
                 end = number+1-precision;
                 
        while(start<=end){
            double mid = start + (end-start)/2;
            if(mid*mid>target)
                end = mid - precision;
            else if(mid*mid<target)
                start = mid + precision;
            else
                return mid;
        }
        //Returns an approximate value.
        return end;
    }
}