#include<iostream>
#include<vector>
using namespace std;

void printMatrix(int arr[][500], int rows, int cols){
    cout << '\n';
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void transpose(int arr[][500], int rows, int cols, int ans[][500]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            ans[j][i]=arr[i][j];
        }
    }
}

void transpose2(int arr[][500], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<i; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main(){
    // // transpose of any rectangular matrix
    //     int arr[500][500] = { {1,2,3}, {4,5,6}, {7,8,9}, {1,3,5}, {2,4,8} };
    //     int rows = 5;
    //     int cols = 3;
    //     int ans[500][500];
    //     cout<<"1st method\n";
    //     printMatrix(arr, rows, cols);
    //     transpose(arr, rows, cols, ans);
    //     printMatrix(ans, cols, rows);
    

    // transpose of a square matrix
        int arr[500][500] = { {1,2,3}, {4,5,6}, {7,8,9} };
        int size = 3;
        cout<<"2nd method\n";
        printMatrix(arr, size, size);
        transpose2(arr, size);
        printMatrix(arr, size, size);
    

    return 0;
}