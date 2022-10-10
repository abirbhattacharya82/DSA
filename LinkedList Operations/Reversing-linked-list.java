//Reversing the linked list

/*-------Reversing a Linked List Using Iterative Approach----------*/


public class LinkedListIterative   
{  
  
static LinkedListNode head;  
static class LinkedListNode   
{  
  
int val;   
LinkedListNode next;  
  
// constructor of the class LinkedListNode  
LinkedListNode(int no)  
{  
val = no;  
next = null;  
}  
}  
  
// Method for reversing the linked list  
LinkedListNode reverse(LinkedListNode node)  
{  
// doing the initialization   
// of as per the steps defined   
LinkedListNode previous = null;  
LinkedListNode curr = node;  
LinkedListNode next = null;  
  
  
while (curr != null)   
{  
next = curr.next;  
curr.next = previous;  
previous = curr;  
curr = next;  
}  
node = previous;  
return node;  
}  
  
// displays the content of the linked list  
void printList(LinkedListNode nde)  
{  
while (nde != null)   
{  
System.out.print(nde.val + " ");  
nde = nde.next;  
}  
}  
  
// main method  
public static void main(String argvs[])  
{  
// creating an object of the class LinkedListIterative  
LinkedListIterative listObj = new LinkedListIterative();  
  
// 4 -> NULL  
listObj.head = new LinkedListNode(4);  
  
// 4 -> 6 -> NULL  
listObj.head.next = new LinkedListNode(6);  
  
// 4 -> 6 -> 7 -> NULL  
listObj.head.next.next = new LinkedListNode(7);  
  
// 4 -> 6 -> 7 -> 1-> NULL  
listObj.head.next.next.next = new LinkedListNode(1);  
  
// 4 -> 6 -> 7 -> 1-> 5 -> NULL  
listObj.head.next.next.next.next = new LinkedListNode(5);  
  
// 4 -> 6 -> 7 -> 1-> 5 -> 8 -> NULL  
listObj.head.next.next.next.next.next = new LinkedListNode(8);  
  
// 4 -> 6 -> 7 -> 1-> 5 -> 8 -> 3 -> NULL  
listObj.head.next.next.next.next.next.next = new LinkedListNode(3);  
  
// 4 -> 6 -> 7 -> 1-> 5 -> 8 -> 3 -> 2 -> NULL  
listObj.head.next.next.next.next.next.next.next = new LinkedListNode(2);  
  
  
System.out.println("The Linked list before reversal is: ");  
listObj.printList(head);  
head = listObj.reverse(head);  
System.out.println("\n");  
System.out.println("After reversal, the linked list is: ");  
listObj.printList(head);  
}  
}  





/*-------Reversing a Linked List Using Recursive Approach----------*/



public class LinkedListRecursive   
{  

static LinkedListNode head;   
  
static class LinkedListNode   
{  
// for containing the value of the node  
int val;  
  
// the next pointer points to the other node of the list or null  
LinkedListNode next;  
  
// constructor of the class  
LinkedListNode(int d)  
{  
// assigning the values  
val = d;  
next = null;  
}  
}  
  
// method where actual reversing of the list takes place  
public LinkedListNode reverseList(LinkedListNode head)  
{  
// if the head is null or the list  
// contains only one element then reversing the list  
// does not have any impact on the list. Therefore, we   
// can return the original list without performing any operation  
if (head == null || head.next == null)  
{  
return head;  
}  
  
// reverse the rest (r) of the list and place  
// the first element of the list at the last   
LinkedListNode r = reverseList(head.next);  
head.next.next = head;  
  
  
head.next = null;  
  
// fixing the head pointer  
return r;  
}  
  
/* Method to display the linked list */  
public void printList(LinkedListNode h)  
{  
LinkedListNode t = h;  
while (t != null)   
{  
System.out.print(t.val + " ");  
  
// moving to the next node  
t = t.next;  
}  
  
System.out.println();  
}  
  
  
// main method  
public static void main(String argvs[])  
{  
// creating an object of the class LinkedListRecursive  
LinkedListRecursive listObj = new LinkedListRecursive();  
  
// 4 -> NULL  
listObj.head = new LinkedListNode(4);  
  
// 4 -> 6 -> NULL  
listObj.head.next = new LinkedListNode(6);  
  
// 4 -> 6 -> 7 -> NULL  
listObj.head.next.next = new LinkedListNode(7);  
  
// 4 -> 6 -> 7 -> 1-> NULL  
listObj.head.next.next.next = new LinkedListNode(1);  
  
// 4 -> 6 -> 7 -> 1-> 5 -> NULL  
listObj.head.next.next.next.next = new LinkedListNode(5);  
  
// 4 -> 6 -> 7 -> 1-> 5 -> 8 -> NULL  
listObj.head.next.next.next.next.next = new LinkedListNode(8);  
  
// 4 -> 6 -> 7 -> 1-> 5 -> 8 -> 3 -> NULL  
listObj.head.next.next.next.next.next.next = new LinkedListNode(3);  
  
// 4 -> 6 -> 7 -> 1-> 5 -> 8 -> 3 -> 2 -> NULL  
listObj.head.next.next.next.next.next.next.next = new LinkedListNode(2);  
  
  
System.out.println("The Linked list before reversal is: ");  
listObj.printList(head);  
head = listObj.reverseList(head);  
System.out.println(" ");  
System.out.println("After reversal, the linked list is: ");  
listObj.printList(head);  
}  
}  




