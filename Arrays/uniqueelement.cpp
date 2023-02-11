#include<iostream>
#include<vector>
using namespace std;

int findunique(vector<int>arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    //find unique element
    int n;
    cout << "Enter the size of arr: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = findunique(arr);
    cout << "Unique elements:  " << ans << endl;
    return 0;
}