#include<iostream>
using namespace std;

bool binarysearch(int arr[][3],int rows,int cols,int target){
    int s = 0;
    int e = rows*cols - 1;
    int mid = s + (e-s)/2;
    while(s <= e){
        int rowIndex = mid/cols;
        int colIndex = mid%cols;
        int element = arr[rowIndex][colIndex];
        if(element == target){
            cout << rowIndex << endl << colIndex << endl;
            return true;
        }
        if(element < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}

int main(){
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;
    int target = 5;
    int ans = binarysearch(arr,rows,cols,target);
    cout << ans << endl;
}