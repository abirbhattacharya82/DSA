//c program to perform all Array operations
#include<stdio.h> //Header file Standard Input and Output
#include<malloc.h> //Header file for Dynamic Memory Allocation
#include<stdlib.h> //Header file for Standard Library Functions
void arrayprint(int arr[],int n) //Function for printing the Array
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}
int arraysearch(int arr[],int n,int element) //Function for searching the Array
{
	int i,pos;
	for(i=0;i<n;i++)
		if(arr[i]==element)
		{
		pos=i;
		break;
		}
		else pos=-1;
	return pos;
}
int main() //Main function begins
{
	int n,*arr,*arr2,i,choice1,choice2,elementd,elements,pos,newelement,newelementposition; //Variable declaration
	do //Providing choice
	{
	printf("\nChoose an option from the given list => ");
	printf("\nEnter 1 to Perform array operation");
	printf("\nEnter 2 to exit\n");
	scanf("%d",&choice1);
	if(choice1==1)
	{
	printf("\nHow many elements do you want to enter => ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int)); //Dynamic Memory Allocation for the array
	if(arr==NULL)
	{
	printf("\nUnable to Allocate memory !!!\n");
	exit(1);
	}
	printf("\nEnter values for the array => \n"); //Asking for user input
	for(i=0;i<n;i++) //Taking user input for the array
	scanf("%d",&arr[i]);
	arrayprint(arr,n); //Printing the Array for confirmation
	do //Providing different array operations
	{
	printf("\nEnter 1 to Insert an element in the array");
	printf("\nEnter 2 to Delete an element from the array");
	printf("\nEnter 3 to Print the array");
	printf("\nEnter 4 to Search for an element in the array");
	printf("\nEnter 5 to go back to main menu\n");
	scanf("%d",&choice2);
	switch(choice2)
	{
	case 1://Insertion
		if(n==0)
        {
        printf("\nEnter the element to be inserted => ");
		scanf("%d",&newelement);
		arr[0]=newelement;
		n=n+1;
		printf("\nElement Inserted successfully\n");
        }
        else
        {
		printf("\nEnter the element to be inserted => ");
		scanf("%d",&newelement);
		printf("\nEnter the position where the element will be inserted => ");
		scanf("%d",&newelementposition);
		if(newelement<=0||newelementposition>n+1)
		{
		printf("\nElement cannot be entered there !!!\n");
		break;
		}
		else
		{
		n++;
        arr = (int*)realloc(arr,n); //Dynamic Memory Allocation for the array
        if(arr==NULL)
		{
		printf("\nUnable to Allocate memory !!!\n");
		exit(1);
		}
        for (i = n - 1; i>=newelementposition; i--)
        arr[i] = arr[i - 1];
        arr[newelementposition - 1] = newelement;
		printf("\nElement Inserted successfully\n");
		}
        }
		break;
	case 2://Deletion
		if(n==0)
		printf("\nArray is empty!!!\n");
		else
		{
		printf("\nEnter the element to be deleted => ");
		scanf("%d",&elementd);
		pos=arraysearch(arr,n,elementd);
		if(pos==-1)
		{
		printf("\nElement not found\n");
		break;
		}
		else
		for(i=pos;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
		n=n-1;
		printf("\nElement deleted successfully\n");
		}
		break;
	case 3://Print
		if(n==0)
		printf("\nArray is empty!!!\n");
		else arrayprint(arr,n);
		break;
	case 4://Searching
		if(n==0)
		printf("\nArray is empty!!!\n");
		else
		{
		printf("\nEnter the element to be searched => ");
		scanf("%d",&elements);
		pos=arraysearch(arr,n,elements);
		if(pos==-1)
		printf("\nElement not found\n");
		else
		printf("\nElement found at position => %d\n",pos+1);
		}
		break;
	case 5://Exit
		choice2=5;
		break;
	default:printf("\nInvalid input\n");
	}
	}while(choice2!=5);
	}
	else choice1=0;
	}while(choice1!=0);
	free(arr);
	return 0; //Main function ends
}
