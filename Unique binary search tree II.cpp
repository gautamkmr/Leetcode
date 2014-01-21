/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<TreeNode *> Trees(int start,int end){
        vector<TreeNode *> res;
        if (start>end){
            res.push_back(NULL);
            return res;
        }else{
            for (int i=start;i<=end;i++){
                vector<TreeNode *> lefts = Trees(start,i-1);;
                
                vector<TreeNode *> rights = Trees(i+1,end);
                
                 
                for (int j = 0; j<lefts.size();j++) {
                    for (int k =0; k<rights.size();k++){
                        TreeNode* node = new TreeNode(i);
                        node->left=lefts[j];
                        node->right=rights[k];
                        res.push_back(node);
                    }
                }
            }
        }
        return res;
    }
     
    vector<TreeNode *> generateTrees(int n) {
        return Trees(1,n);
    }

};
