#include<iostream>
using namespace std;

void spiralprint(int arr[][4],int row,int col) {
        int count = 0;
        int total = row*col;
        int startingRow = 0;
        int startingcol = 0;
        int endingRow = row-1;
        int endingcol = col-1;
        while(count < total){
            // print starting row
            for(int index = startingcol;count < total && index<=endingcol;index++){
                cout << arr[startingRow][index] << " ";
                count++;
            }
            startingRow++;
            // print ending col
            for(int index = startingRow;count < total && index<=endingRow;index++){
                cout << arr[index][endingcol] << " ";
                count++;
            }
            endingcol--;
            // print ending row 
            for(int index = endingcol;count < total && index>=startingcol;index--){
                cout << arr[endingRow][index] << " ";
                count++;
            }
            endingRow--;
            // print starting col
            for(int index = endingRow;count < total && index>=startingRow;index--){
                cout << arr[index][startingcol] << " ";
                count++;
            }
            startingcol++;
        }
    }

int main(){
    int arr[5][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
    int row = 5;
    int col = 4;

    spiralprint(arr,row,col);
    return 0;
}