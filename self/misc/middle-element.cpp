/*

Middle Element
This is an easy problem! Apply runner technique to find mid-point of a given linked list in a single pass.

Input
Head of the Linked List is given as input.

 1->2->3->4->5->6->7->8
Output

4 

*/


#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

int getMid(node *head){

    //Complete this function to return data middle node

    node * slow = head;
    node * fast = head;

    while (fast->next) {
    	slow = slow->next;
    	fast = fast->next->next;
    }

    int ans = slow->data;

    return ans;
}