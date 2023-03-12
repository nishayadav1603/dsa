#include<iostream>
using namespace std;

int solve(int arr[],int n,int s,int e,int key){
    //base case 
    if(s > e){
        return -1;
    }
    int mid = s+(e-s)/2;
    if(arr[mid] == key){
        return mid;
    }
    if(arr[mid] < key){
        return solve(arr,n,mid+1,e,key);
    }
    else{
        return solve(arr,n,s,mid-1,key);
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int n = 5;
    int s = 0;
    int e = n-1;
    int key = 20;
    
    int index =  solve(arr,n,s,e,key);
    cout << index << endl;
    
    return 0;
}