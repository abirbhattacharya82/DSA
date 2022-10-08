#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *top=0;

void push() 
{
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void display()
{

  struct node *temp;
  temp=top;
  if(top==0)
  {
    printf("Stack is empty: ");
  }
  else
  {
   while(temp!=0)
   {
    printf("%d",temp->data);
    temp=temp->link;
   }
  }
}

void peek()
{
    if(top==0)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("top elements is %d",top->data);
    }
}

void pop()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("Stack is Empty");
    }
    else
    {
    printf("%d",top->data);
    top=top->link;
    free(temp);
    }
}

int main()
{
    int ch;
    do
    {
       printf("Enter Choice:1.Push 2.Pop 3.peek 4.display :");
       scanf("%d",&ch);
       switch (ch)
       {
       case 1:push();
       break;
       case 2:pop();
       break;
       case 3:peek();
       break;
       case 4:display();
       break;
       default:printf("invalid choice");
       break;
       }
    } 
    while (ch!=0);
    return 0;
    
}

