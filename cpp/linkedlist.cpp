#include <iostream>
using namespace std;

/*
NOTE:


 */


class Node {
    public:

    int data;
    Node * next;


    Node(int d = -1, Node * n = NULL) {
        data = d;
        next = n;
    }
};

class LinkedList {

    public:


    Node * head;


    LinkedList() {
        cout << "LL created" << endl;
    }


    void add(int d = -1) {

        if (head == NULL) {
            // create a new node with data
            Node * temp = new Node(d, NULL);            
        }

        Node * temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        Node * newNode = new Node(d);


        // add the node at the right location,
        temp->next = newNode;

        cout << "Inserted";

    }

    void print() {
        Node * temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
    }

};

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    /*
    Q. implement a linkedlist
        10 12 32 10

     */

    LinkedList ll;




	return 0;
}