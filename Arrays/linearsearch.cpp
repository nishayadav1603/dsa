#include<iostream>
using namespace std;

bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    //linear search
    int arr[] = {1,2,3,4,5};
    int size;
    cout << "Enter the size: " << endl;
    cin >> size;
    int key = 6;
    bool ans = find(arr,size,key);
    if(ans){
        cout << "found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }
    return 0;
}