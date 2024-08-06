#include <bits/stdc++.h>
using namespace std;


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

	int traverseDFS(TreeNode * root, int cnt) {
		if (root == NULL) {
			return cnt;
		}
		cnt++;
		int left = traverseDFS(root->left, cnt);
		int right = traverseDFS(root->right, cnt);
		int depth = max(left, right);
		return depth;
	}

    int maxDepth(TreeNode* root) {
       int cnt = 0;
       return traverseDFS(root, cnt); 
    }
};

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	

}