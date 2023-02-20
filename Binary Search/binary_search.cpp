#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int target){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    while(s <= e){
        if(arr[mid] == target){
            return mid;
        }
        else if(target < arr[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    int arr[] = {1,4,7,9,15,17,19};
    int size = 7;
    int target = 18;
    int ans = binarysearch(arr,size,target);
    cout << ans << endl;
    return 0;
}