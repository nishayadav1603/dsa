#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }

    cout << "printing row-wise: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Printing col-wise: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //row-wise sum
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }

    return 0;
}