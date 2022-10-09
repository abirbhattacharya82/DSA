//C program to perform all Matrix operations
#include<stdio.h> //Header file Standard Input and Output
void printmatrix(int rows, int columns, int matrix[][rows]) //Function for printing the Matrix
{
int i,j; //Variable declaration
 for(i=0;i<rows;i++)
{
    for(j=0;j<columns;j++)
    {
        printf("%d ",matrix[i][j]);
    }
        printf("\n");
}
}
void addition(int rows, int columns, int matrix1[][rows],int matrix2[][rows]) //Function for Addition of two Matrix
{
int i,j; //Variable declaration
int matrix[rows][columns]; //Memory allocation for Matrix
 for(i=0;i<rows;i++)
{
    for(j=0;j<columns;j++)
    {
        matrix[i][j]=matrix1[i][j]+matrix2[i][j];
    }
}
printmatrix(rows,columns,matrix); //Calling the print function
}
void subtraction(int rows, int columns, int matrix1[][rows],int matrix2[][rows]) //Function for Subtraction of two Matrix
{
int i,j; //Variable declaration
int matrix[rows][columns]; //Memory allocation for Matrix
 for(i=0;i<rows;i++)
{
    for(j=0;j<columns;j++)
    {
        matrix[i][j]=matrix1[i][j]-matrix2[i][j];
    }
}
printmatrix(rows,columns,matrix); //Calling the print function
}
void multiplication(int rows, int columns, int matrix1[][rows],int matrix2[][rows]) //Function for Multiplication of two Matrix
{
int i,j,k; //Variable declaration
int matrix[rows][columns]; //Memory allocation for Matrix
for (i = 0; i < rows; i++)
{
    for(j = 0; j < columns; j++)
    {
    matrix[i][j]=0;
        for (k = 0; k < rows; k++)
        {
            matrix[i][j] = matrix[i][j]+(matrix1[i][k] * matrix2[k][j]);
        }
    }
}
printmatrix(rows,columns,matrix); //Calling the print function
}
int main() //Main function begins
{
int rows,i,j,columns,choice; //Variable declaration
printf("Enter Number of rows for the square matrix -> "); //Dimension of the array
scanf("%d",&rows);
columns=rows; //Since it is a square matrix number of rows and columns are equal
int matrix1[rows][columns]; //Memory allocation for Matrix1
int matrix2[rows][columns]; //Memory allocation for Matrix2
printf("Enter data for the first matrix -> \n"); //Taking user input for the First Matrix
for(i=0;i<rows;i++)
{
    for(j=0;j<columns;j++)
    {
        scanf("%d",&matrix1[i][j]);
    }
}
printf("Enter data for the second matrix -> \n"); //Taking user input for the Second Matrix
for(i=0;i<rows;i++)
{
    for(j=0;j<columns;j++)
    {
        scanf("%d",&matrix2[i][j]);
    }
}
printf("Inserted data for the First matrix -> \n"); //Printing the Matrix 1 for user confirmation
printmatrix(rows,columns,matrix1); //Calling the print function
printf("Inserted data for the Second matrix -> \n"); //Printing the Matrix 2 for user confirmation
printmatrix(rows,columns,matrix2); //Calling the print function
do //Providing different Matrix operations
{
printf("\nEnter 1 to perform Addition of Matrix => \n");
printf("\nEnter 2 to perform Subtraction of Matrix => \n");
printf("\nEnter 3 to perform Multiplication of Matrix => \n");
printf("\nEnter 4 to Exit => \n");
scanf("%d",&choice);
switch(choice)
{
    case 1:addition(rows,columns,matrix1,matrix2);
    break;
    case 2:subtraction(rows,columns,matrix1,matrix2);
    break;
    case 3:multiplication(rows,columns,matrix1,matrix2);
    break;
    case 4:choice=4;
    break;
    default:
    printf("Invalid choice!!!");
    break;
}
}
while(choice!=4);
return 0; //Main function ends
}
