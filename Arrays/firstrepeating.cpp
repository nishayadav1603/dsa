#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[] = {10,5,3,4,3,5,6};
    int n = 7;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i] == arr[j]){
    //             cout << arr[i] << " ";
    //         }
    //     }
    // }

    unordered_map<int,int> hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[arr[i]] > 1){
            return i+1;
        }
    }
    return -1;
}