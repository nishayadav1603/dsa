#include<iostream>
using namespace std;

int main(){
    //fancy pattern 1
    int n;
    cin >> n;
    for(int row=0;row<n;row++){
        for(int col=0;col<2*n-row-2;col++){
            cout << "*";
        }
        for(int col=0;col<row+1;col++){
            cout << row+1 ;
            if(col != row){
                cout << "*";
            }
            
        }
        for(int col=0;col<2*n-row-2;col++){
            cout << "*";
        }
        cout << endl;
    }
}