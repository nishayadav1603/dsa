#include<iostream>
using namespace std;

void printdigits(int n){
    //base case
    if(n == 0){
        return;
    }
    printdigits(n/10);
    int digit = n % 10;
    cout << digit << " ";
}

int main(){
    int n = 647;
    printdigits(n);
    return 0;
}