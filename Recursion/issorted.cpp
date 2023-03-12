#include<iostream>
using namespace std;

bool solve(int arr[],int n,int i){
    //base case 
    if(i == n-1){
        return true;
    }
    if(arr[i+1] < arr[i]){
        return false;
    }
    return solve(arr,n,i+1);
}

int main(){
    int arr[] = {10,20,30,40,50};
    int n = 5;
    int i = 0;
    bool ans = solve(arr,n,i);
    if(ans){
        cout << "array is sorted " << endl;
    }
    else{
        cout << "array is not sorted " << endl;
    }
    return 0;
}