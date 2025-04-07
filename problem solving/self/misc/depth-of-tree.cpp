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

/*
basically what i can see here
so basically tere is this traverseDFS method right...
which takes in a root and a cnt. starts as 0, we build it in the recursive calls
we say if we reached a node, who's null,
simply return the count we got so far,
otherwise we increment the count 

then we make the left call (order is very important dude)
and send the cnt with it,

make the right call, send the coutn with it,
now..
inorder to find the depth of it,
what i say,

what's greater?
the left call or right call?
get the max,
and return it as depth

now create a maxDepth methods, which takes in a node, and inside
create a cnt var as 0,
call the traverseDFS method and returns it's ans,

that's it...


*/
