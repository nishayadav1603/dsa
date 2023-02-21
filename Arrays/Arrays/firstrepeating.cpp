#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,5,3,4,3,5,6};
    int n = 7;
    for(int i=0;i<n;i++){
        bool isrepeated = false;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                isrepeated = true;
                cout << i+1 << " ";
            }
        }
    }
    return -1;
}