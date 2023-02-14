#include<iostream>
using namespace std;

int main(){
    //print extremes
    int arr[] = {1,2,15,4,5,9};
    int n;
    cin >> n;
    int start = 0;
    int end = n-1;
    while(start<=end){
        if(start == end){
            cout << arr[start] << " ";
        }
        else{
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
    return 0;
}