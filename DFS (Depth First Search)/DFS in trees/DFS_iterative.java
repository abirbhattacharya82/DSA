import java.util.Stack;

public class DFS_iterative{
    public static void main(String args[]){
        Node n1 = new Node(1);
        Node n2 = new Node(2);
        Node n3 = new Node(3);
        Node n4 = new Node(4);
        Node n5 = new Node(5);
        Node n6 = new Node(6);
        Node n7 = new Node(7);


        n1.left = n2;
        n1.right = n3;
        n2.left = n4;
        n2.right = n5;
        n3.left = n6;
        n3.right = n7;
 /*
                 n1
               /    \
              n2     n3
             / \     /  \
            n4  n5  n6   n7
*/

        Stack<Node> stack = new Stack<>();
        stack.add(n1);

        while(!stack.isEmpty()){
            Node visited = stack.pop();
            System.out.print(visited.data+" ");
            if(visited.right!=null) stack.push(visited.right);
            if(visited.left != null) stack.push(visited.left);
        }
    }
}