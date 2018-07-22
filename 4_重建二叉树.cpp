#include <iostream>
#include <vector>
using namespace std;


//Definition for binary tree
 struct TreeNode {     
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

 /*
 前序 1 2 3 4 5 6 7
 中序 3 2 4 1 6 5 7
 */
class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		return reConstructTree(pre, 0, pre.size() - 1, vin, 0, vin.size() - 1);
	}
	TreeNode* reConstructTree(vector<int> pre, int startPre, int endPre, vector<int> vin, int startIn, int endIn) {
		if (startPre > endPre || startIn > endIn)
			return NULL;
		TreeNode* root = new TreeNode(pre[startPre]);
		for (int i = startIn; i <= endIn; i++) {
			if (vin[i] == pre[startPre]) {
				root->left = reConstructTree(pre, startPre + 1, startPre + (i - startIn), vin, startIn, i - 1);
				root->right = reConstructTree(pre, startPre + (i - startIn) + 1, endPre, vin, i + 1, endIn);
				break;
			}
		}
		return root;
	}
};
