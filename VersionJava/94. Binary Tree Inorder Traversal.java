class Solution {

    private List<Integer> vct = new ArrayList<>();

    public List<Integer> inorderTraversal(TreeNode root) {
        if (root == null)
            return vct;
        
        inorderTraversal(root.left);
        vct.add(root.val);
        inorderTraversal(root.right);
        return (vct);
    }
}