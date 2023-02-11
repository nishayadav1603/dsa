#include<iostream>
using namespace std;

int main(){
    // inverted half pyramid
    int n;
    cin >> n;
    for(int row=0;row<6;row++){
        for(int col=0;col<n-row;col++){
            cout << "* ";
        }
        cout << endl;
    }
}