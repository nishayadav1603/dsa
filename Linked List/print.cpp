#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }
};

void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

int main() {

        Node* head = new Node(10);
        Node* temp1 = new Node(20);
        Node* temp2 = new Node(30);
        Node* temp3 = new Node(40);
        Node* temp4 = new Node(50);
        Node* temp5 = new Node(60);

        head -> next = temp1;
        temp1 -> next = temp2;
        temp2 -> next = temp3;
        temp3 -> next = temp4;
        temp4 -> next = temp5;

        print(head);
        cout << endl;
        cout << endl;

        int len = findLength(head);
        cout << len << endl;
        
        return 0;
}