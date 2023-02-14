#include<iostream>
using namespace std;

int main(){
    //numeric hollow inverted half pyramid
    int n;
    cin >> n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            if(col==0 || col==n-row-1 || row==0){
                cout << col+1 << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}