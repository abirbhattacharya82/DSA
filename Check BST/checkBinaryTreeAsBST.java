/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isValidBST(TreeNode root) {
        return checkBST(root, Long.MAX_VALUE, Long.MIN_VALUE);
    }
    
    public boolean checkBST(TreeNode root, long maxval, long minval){
        if(root == null) return true;
        
        // if(root.left == null && root.right == null && (root.val == Integer.MAX_VALUE || root.val == Integer.MIN_VALUE)) return true;
        
        else if(root.val >= maxval || root.val <= minval) return false;
        
        else{
            return checkBST(root.right, maxval, root.val) && checkBST(root.left, root.val, minval);
        }
    }
}