#include<iostream>
using namespace std;

void findmissing(int arr[],int n){
    for(int i=0;i<n;i++){
        int index = abs(arr[i]);
        if(arr[index-1] > 0){
            arr[index-1] *= -1;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            cout << i+1 << " ";

        }
        
    }
}

void findmissing1(int arr[],int n){
    int i=0;
    while(i < n){
        int index = arr[i]-1;
        if(arr[i] != arr[index]){
            swap(arr[i],arr[index]);
        }
        else{
            ++i;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] != i+1){
            cout << i+1 << " ";
        }
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,4,6,3,7,8};
    int N = 8;

    //findmissing(arr,N);
    findmissing1(arr,N);
    // int size = 7;
    // int sum = N*(N+1)/2;
    // for(int i=0;i<size;i++){
    //     sum = sum-arr[i];
    // }

    // cout << sum << " ";

    return 0;
}