#include<iostream>
using namespace std;

int main(){
    //solid diamond
    //full pyramid
    int n;
    cin >> n;
    for(int row=0;row<n;row++){
        //spaces
        for(int col=0;col<n-row-1;col++){
            cout << " ";
        }
        //stars
        for(int col=0;col<row+1;col++){
            cout << "* ";
        }
        cout << endl;
    }
    //inverted full pyramid
    for(int row=0;row<n;row++){
        //spaces
        for(int col=0;col<row;col++){
            cout << " ";
        }
        //stars
        for(int col=0;col<n-row;col++){
            cout << "* ";
        }
        cout << endl;
    }
}