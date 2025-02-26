#include <iostream>
using namespace std;

/*
NOTE:
Complete this method pls

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
        head = NULL;
        cout << "LL created" << endl;
    }


    void add(int d = -1) {

        if (head == NULL) {
            // create a new node with data
            Node * temp = new Node(d, NULL);     
            head = temp;       
            return;
        }


        // basically storing the address of head in a temp * var (pointer)
        Node * temp = head;

        // finding the end of the ll
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // creating a new node
        Node * newNode = new Node(d);


        // add the node at the right location, (get it? right xD)
        temp->next = newNode;

        cout << "Inserted";

    }


    void print() {

        Node * temp = head;
        // while the pointer is not null, advance it by one each time and print the value
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
    }

    // can you implement remove? Very basic operation

    void remove(int pos) {
        int tracker = 0;

        /* if we're add position 0, simply make the head
        point to the next node,
        but who will delete this first node? 
        */
        if (pos == tracker) {
            head = head->next;
        }

        Node * temp = head;


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

    ll.add(10);
    ll.add(11);
    ll.add(12);
    ll.add(13);
    ll.add(14);

    ll.print();





	return 0;
}