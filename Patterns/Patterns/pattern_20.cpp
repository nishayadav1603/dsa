#include<iostream>
using namespace std;

int main(){
    //numeric palindrome equilateral pyramid
    int n;
    cin >> n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout << "  ";
        }
        for(int col=0;col<row+1;col++){
            cout << col+1 << " ";
        }
        for(int col=row;col>=1;col--){
            cout << col << " ";
        }
        cout << endl;
    }
}