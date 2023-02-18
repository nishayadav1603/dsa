#include<iostream>
using namespace std;

int findDup(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}

int findDup1(int arr[],int n){
    int ans = -1;
    for(int i=0;i<n;i++){
        int index = abs(arr[i]);
        if(arr[index]<0){
            return index;
        }
        arr[index] *= -1;
    }  
    return ans;
}

int findDup2(int arr[],int n){
    while(arr[0] != arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
}

int main(){
    int arr[] = {1,3,4,2,2};
    int n  = 5;

    //int ans = findDup(arr,n);

    //int ans = findDup1(arr,n);

    int ans = findDup2(arr,n);
    cout << ans << " ";
    return 0;
}