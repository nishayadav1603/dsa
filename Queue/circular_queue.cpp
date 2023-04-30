#include <iostream>
using namespace std;

class CirQueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    CirQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data) {
        //Queue Full
        if((front == 0 && rear == size-1)) {
            cout << "Q is full " << endl;
            return;
        }
        //1st element
        else if(front == -1) {
            front = rear = 0;
            arr[rear] = data;
        }
        //circular nature
        else if(rear == size-1 && front != 0 ) {
            rear = 0;
            arr[rear] = data;
        }
        //normal flow
        else{
            rear++;
            arr[rear]= data;
        } 
    }

    void pop() {
        //empty check
        if(front == -1) {
            cout << "Q is empty " << endl;
        }
        //single element
        else if (front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;  
        }
        //circular nature
        else if(front == size-1) {
            front = 0;
        }
        //normal flow
        else {
            front++;
        }
    }
};

int main() {
   CirQueue q(10);

   q.push(5);
   q.push(15);
   q.push(25);
   q.push(55);
   q.pop();

   return 0;
}