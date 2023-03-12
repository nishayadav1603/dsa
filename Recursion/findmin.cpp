#include<iostream>
using namespace std;

void findmin(int arr[],int n,int i,int& mini){
    //base case
    if(i >= n){
        return;
    }
    mini = min(mini,arr[i]);
    findmin(arr,n,i+1,mini);
}

int main(){
    int arr[] = {10,20,60,7,50};
    int n = 5;
    int i = 0;
    int mini = INT_MAX;
    findmin(arr,n,i,mini);
    cout << mini << endl;
    return 0;
}