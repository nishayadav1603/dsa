#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,6,3,6,1};
    int n  = 7;
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    cout << ans << " ";
    return 0;
}