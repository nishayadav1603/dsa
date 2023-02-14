#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,6,3,7,8};
    int N = 8;
    int size = 7;
    int sum = N*(N+1)/2;
    for(int i=0;i<size;i++){
        sum = sum-arr[i];
    }

    cout << sum << " ";

    return 0;
}