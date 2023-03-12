#include<iostream>
using namespace std;

void findmax(int arr[],int n,int i,int& maxi){
    //base case
    if(i >= n){
        return;
    }
    if(arr[i] > maxi){
        maxi = arr[i];
    }
    findmax(arr,n,i+1,maxi);
}

int main(){
    int arr[] = {10,20,60,40,50};
    int n = 5;
    int i = 0;
    int maxi = INT_MIN;
    findmax(arr,n,i,maxi);
    cout << maxi << endl;
    return 0;
}