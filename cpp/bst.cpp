#include <iostream>
using namespace std;

// class of node

class Node {
private:

public:

	int data;
	Node * left;
	Node * right;

	Node(int d = NULL, Node * l = NULL, Node * r = NULL) {
		data = d;
		left = l;
		right = r;
	}

}


// class of bst
class BST {
private:
public:

	Node * root;

	BST(int d = NULL) {
		root = new Node(d);
	}

	void insert(int data) {
		// Node * newNode = new Node(data);
	}

	void dfs(Node * n, int key) {

		if (n->data < key or n->data == key) {
			// go left
		} else {
			// go right
		}

	}


}




int main() {
	return 0;
}