#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int target){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s <= e){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    int arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170};
    int n = 10;
    int target = 110;
    int ans = binarysearch(arr,n,target);
    cout << ans << endl;
    return 0;
}