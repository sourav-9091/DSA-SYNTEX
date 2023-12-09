#include<vector>

int getLeafNodeCount(TreeNode<int>* root) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return 0;
    }
    
    //base case
    if(root -> children.size() == 0) {
        return 1;
    }
    
    int count = 0 ;
    for(int i = 0; i < root -> children.size() ; i++) {
        count += getLeafNodeCount(root -> children[i]);
    }
    
    return count;
}