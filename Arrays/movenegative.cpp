#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {-12,11,-13,-5,6,-7,5,-3,12};
    int size = 9;
    int s = 0;
    int e = size-1;
    while(s <= e){
        if(arr[s] < 0 && arr[e] < 0){
            s++;
        }
        else if(arr[s] > 0 && arr[e] < 0){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        else if(arr[s] > 0 && arr[e] > 0){
            e--;
        }
        else{
            s++;
            e--;
        }
    }
    print(arr,size);
    return 0;
}