#include<iostream>
#include<vector>
using namespace std;

void waveprint(int arr[5][4],int row,int col){
    for(int startcol = 0;startcol < col;startcol++){
        //even no of col
        if((startcol & 1) == 0){
            for(int i=0;i<row;i++){
                cout << arr[i][startcol] << " ";
            }

        }
        else{
            for(int i=row-1;i>=0;i--){
                cout << arr[i][startcol] << " ";
            }
        }
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

    waveprint(arr,row,col);
    return 0;
}