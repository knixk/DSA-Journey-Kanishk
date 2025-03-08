#include <iostream>
using namespace std;


/* 
NOTE:

*/

// create a class of node

class Node {
public:
    int data;
    Node * next;

    Node(int d = -1, Node * n = NULL) {
        this->data = d;
        this->next = n;
    }
};


// create a class of ll

class LinkedList {
    public:
        Node * head;


        LinkedList(Node * c = NULL) {
            this->head = c;
        }

        void addToList(int d) {
            Node * data = new Node(d);

            Node * temp = head;

            while (temp->next != NULL) {
                // while we still have a valid value
                // move forward
                // when we reach, chain the next one to this
                temp = temp->next;

            }
                // do it
            temp->next = data;
        }

        void printList() {
            Node * temp = head;

            while (temp->next != NULL) {
                // advance the pointer
                cout << temp->data;
            }
        }
};

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // Q. reverse a ll, pretty standard question
    // also create the ll by any means u like

    LinkedList ll;

    ll.addToList(1);
    ll.addToList(1);
    ll.addToList(1);
    ll.addToList(1);
    ll.addToList(1);



    ll.printList();

	return 0;
}