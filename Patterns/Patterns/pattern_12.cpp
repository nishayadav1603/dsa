#include<iostream>
using namespace std;

int main(){
    //ellipse solid diamond
    int n;
    cin >> n;
    for(int row=0;row<n;row++){
        //stars
        for(int col=0;col<n-row;col++){
            cout << "*";
        }
        //spaces
        for(int col=0;col<2*row+1;col++){
            cout << " ";
        }
        //stars
        for(int col=0;col<n-row;col++){
            cout << "*";
        }
        cout << endl;
    }
    for(int row=0;row<n;row++){
        //stars
        for(int col=0;col<row+1;col++){
            cout << "*";
        }
        //spaces
        for(int col=0;col<2*n-2*row-1;col++){
            cout << " ";
        }
        //stars
        for(int col=0;col<row+1;col++){
            cout << "*";
        }
        cout << endl;
    }
}