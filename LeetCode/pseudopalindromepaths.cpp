/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	map<int,int> mm;
	int count = 0;

	int isPalindrome(){
		
		int odds = 0;
		int evens = 0;
		int s = 0;
		for(auto k:mm){
			if(k->second==0)
				continue;
			s+= k->second;

			if(k->second%2 && odds==0){
				odds+=1;
			}else if(k->second%2==0){
				evens+=1;
			}else{
				return 0;
			}
		}
		if(odds==1 || (odds==0 && evens>0)){
			return 1;
		}
		return 0;
		
	}
    int pseudoPalindromicPaths (TreeNode* root) {
    	calculate(root);
    	return count;
    }
    void calculate(TreeNode* root){
    	auto f = mm.find(root->val);
        if(f!= mm.end()){
        	f->second++;
        }else{
        	mm.insert(pair<int,int>(root->val,1));
        }
        if(root->left==NULL && root->right==NULL){
        	//leaf node
        	count+=isPalindrome();
        	f->second--;
        	return;
        }
        else{
        	if(root->left!=NULL)
        		calculate(root->left);
        	if(root->right!=NULL)
        		calculate(root->right);
        	f->second--;
        	return;
        }
    }
};