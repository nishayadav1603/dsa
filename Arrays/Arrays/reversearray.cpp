#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
     //reverse array
     int arr[] = {1,2,15,4,5};
     int n;
     cin >> n;
     int start = 0;
     int end = n-1;
     while(start<=end){
         swap(arr[start],arr[end]);
         start++;
         end--;
     }
     printarray(arr,n);
    return 0;
}