#include<climits>
#include<vector>

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
    //corner case
    if(root == NULL){
        return root;
    }
    
    TreeNode<int> *maximum = root;
    
    for(int i = 0; i < root -> children.size() ;i++) {
        TreeNode<int> *temp = maxDataNode(root -> children[i]);
        if(temp -> data > maximum -> data) {
            maximum = temp;
        }	
    }
    return maximum;
} 