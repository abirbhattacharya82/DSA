import java.util.Scanner;
 class Main {
      public static void main(String args[]){
         int j, factorial=1, number;
         System.out.println("Enter the number to which you need to find the factorial:");
         Scanner sc = new Scanner(System.in);
         number = sc.nextInt();

         for(j = 1; j<=number; j++) {
            factorial = factorial * j;
         }
         System.out.println("Factorial of the given number is:: "+factorial);
      }
   }
