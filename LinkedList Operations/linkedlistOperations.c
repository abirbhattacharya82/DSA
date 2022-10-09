//c program to perform all Linked List operations
#include<stdio.h> //Header file Standard Input and Output
#include<stdlib.h> //Header file for Standard Library Functions
#include<malloc.h> //Header file for Dynamic Memory Allocation
struct node // Node Creation
{
  int data;
  struct node *next;
};
struct node *head;
void createnode (int d) //Function for Creating nodes
{
  struct node *ptr, *temp;
  ptr = (struct node *) malloc (sizeof (struct node));
  if (ptr == NULL)
    printf ("\nNode creation failed !!!\n");
  else
    {
      ptr->data = d;
      ptr->next = NULL;
      if (head == NULL)
	head = ptr;
      else
	{
	  temp = head;
	  while (temp->next != NULL)
	    {
	      temp = temp->next;
	    }
	  temp->next = ptr;
	}
    }
}

void deletenode (int pos) //Function for Deleting nodes
{
  int i;
  pos = pos - 1;
  struct node *ptr, *temp;
  if (head == NULL)
    {
      printf ("\nThe node is empty !!!\n");
    }
  else
    {
      if (pos == 0)
	{
	  ptr = head;
	  printf ("\nValue at node %d was %d\n", pos + 1, ptr->data);
	  head = ptr->next;
	  free (ptr);
	}
      else
	{
	  ptr = head;
	  for (i = 0; i < pos; i++)
	    {
	      temp = ptr;
	      if (ptr == NULL)
		{
		  printf ("\nPosition out of bound !!!\n");
		  return;
		}
	      ptr = ptr->next;
	    }
	  temp->next = ptr->next;
	  printf ("\nValue at node %d was %d\n", pos + 1, ptr->data);
	  free (ptr);
	}
    }
}

void reverse() //Function for Reversing a linkedlist
{
  struct node *cur, *nxt, *prv = NULL;
  cur = head;
  if (head == NULL)
    {
      printf ("\nThe node is empty !!!\n");
    }
  else
    {
      while (cur != NULL)
	{
	  nxt = cur->next;
	  cur->next = prv;
	  prv = cur;
	  cur = nxt;
	}
      head = prv;
    }
  printf ("\nList reversed successfully\n");
}

void search (int d) //Function for Searching a node
{
  int i = 1, flag = 0;
  struct node *ptr;
  if (head == NULL)
    {
      printf ("\nThe node is empty !!!\n");
    }
  else
    {
      ptr = head;
      while (ptr != NULL)
	{
	  if (ptr->data == d)
	    {
	      printf ("\nValue found at position %d\n", i);
	      flag = 1;
	      break;
	    }
	  ptr = ptr->next;
	  i++;
	}
      if (flag == 0)
	printf ("\nValue not found in list !!!\n");
    }
}

void printdata() //Function for Printing the linkedlist
{
  int i = 1;
  struct node *ptr;
  if (head == NULL)
    {
      printf ("\nThe node is empty !!!\n");
    }
  else
    {
      ptr = head;
      while (ptr != NULL)
	{
	  printf ("\nValue of node %d is %d\n", i, ptr->data);
	  i++;
	  ptr = ptr->next;
	}
    }
}

int count () //Function for Counting total number of nodes
{
  struct node *ptr;
  int c = 0;
  ptr = head;
  while (ptr != NULL)
    {
      ptr = ptr->next;
      c++;
    }
  return c;
}

void anypos (int d, int p) //Function for Inserting nodes at any position
{
  int c, i;
  p = p - 1;
  struct node *ptr, *temp;
  c = count ();
  ptr = (struct node *) malloc (sizeof (struct node));
  ptr->data = d;
  ptr->next = NULL;
  if (c < p || c < 1)
    {
      printf ("\nInvalid position !!!\n");
      return;
    }
  else
    {
      if (p == 0)
	{
	  ptr->next = head;
	  head = ptr;
	}
      else
	{
	  temp = head;
	  for (i = 0; i < p - 1; i++)
	    {
	      temp = temp->next;
	    }
	  ptr->next = temp->next;
	  temp->next = ptr;
	}
    }
}

int main() //Main function begins
{
  int choice, i = 1, data, pos;
  while (i != 7) //Providing different LinkedList operations
{
      printf("\nEnter your choice\n");
      printf ("\nEnter 1 to Create a node\n");
      printf ("\nEnter 2 to Delete a node\n");
      printf ("\nEnter 3 to Search a node\n");
      printf ("\nEnter 4 to Print all nodes\n");
      printf ("\nEnter 5 to Reverse the list\n");
      printf ("\nEnter 6 to Insert node at any position of the list\n");
      printf ("\nEnter 7 to Exit \n");
      scanf ("%d", &choice);
      switch(choice)
	{
	case 1:
	  printf ("\nEnter data for the node => \n");
	  scanf ("%d", &data);
	  createnode (data);
	  break;
	case 2:
	  printf ("\nEnter position of the node to be deleted => \n");
	  scanf ("%d", &data);
	  deletenode (data);
	  break;
	case 3:
	  printf ("\nEnter data to be searched => \n");
	  scanf ("%d", &data);
	  search (data);
	  break;
	case 4:
	  printdata ();
	  break;
	case 5:
	  reverse ();
	  break;
	case 6:
	  printf ("\nEnter position of the node => \n");
	  scanf ("%d", &pos);
	  printf ("\nEnter data for the node => \n");
	  scanf ("%d", &data);
	  anypos (data, pos);
	  break;
	case 7:
	  i = 7;
	  break;
	}
    }
  return 0; //Main function ends
}
