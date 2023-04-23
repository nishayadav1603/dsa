#include <iostream>
using namespace std;

class Stack {
        public:
        int *arr;
        int top;
        int size;

 
        Stack(int size) {
                arr = new int[size];
                this-> size = size;
                top = -1;
        }

         
        void push(int data) {
                if(size - top > 1) {
                        //space available
                        top++;
                        arr[top] = data;
                }
                else {
                        cout << "Stack Overflow"<< endl;
                }
        }

        void pop() {
                if(top == -1 ) {
                        //stack  empty
                        cout << "Stack Underflow" << endl;
                }
                else {
                        top--;
                }
        }

        int getTop() {
                if(top == -1) {
                        cout << "stack empty " << endl;
                }
                else {
                        return arr[top];
                }
        }

        int getSize() {
                return top + 1;
        }

        bool isEmpty() {
                if(top == -1) {
                        return true;
                }
                else {
                        return false;
                }

        }
};

int main() {

  //CREATION
  Stack s(5);

  //insertion
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  


  cout << "Size of stack " << s.getSize() << endl;

  while(!s.isEmpty()) {
          cout << s.getTop() << " ";
          s.pop();
  }cout << endl;

  cout << "Size of stack " << s.getSize() << endl;

  s.pop();

  return 0;
}