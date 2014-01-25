/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public void inorder(ArrayList<Integer> result,TreeNode root)
    {
        if(root==null) return;
        if(root.left!=null)
          inorder(result,root.left);
         
        result.add(root.val);
        
        if(root.right!=null)
          inorder(result,root.right);
    } 

    public ArrayList<Integer> inorderTraversal(TreeNode root) {
       ArrayList<Integer> result=new ArrayList<Integer>();
     inorder(result,root);
     return result;
    }
}
