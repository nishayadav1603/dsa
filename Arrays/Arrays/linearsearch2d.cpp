#include<iostream>
using namespace std;

bool find(int arr[][3],int rows,int cols,int key){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;

}

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    int key = 5;
    if(find(arr,3,3,key)){
        cout << "found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }
    return 0;
}